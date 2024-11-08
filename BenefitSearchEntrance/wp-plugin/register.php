<?php
/*
Plugin Name: Benefit Search Entrance
Description: A Blazor-based search plugin for WordPress.
Version: 1.0
Author: Fida & Eilif
*/

// Register the Benefit Search widget
function register_benefit_search_entrance_widget($widgets_manager) {
    require_once plugin_dir_path(__DIR__) . 'akapluss-benefit-search-entrance/widgets/benefit-search-entrance-widget.php';

      $renderHtml = "";

      // Path to your index.html file, relative to the plugin directory
      $file_path = plugins_url('index.html', __FILE__);
      /*$file_path = 'http://localhost/wp-content/plugins/akapluss-benefit-search-entrance/index.html';*/

      // Check if the file exists and is readable
      if (file_exists($file_path) && is_readable($file_path)) {
          // Read the contents of the file
          $content = file_get_contents($file_path);

          // Use a regular expression to extract content between the <body> tags
          if (preg_match('/<body[^>]*>(.*?)<\/body>/is', $content, $matches)) {
              // Echo the content found inside the body
              $renderHtml = $matches[1];
          } else {
              // Display an error message if <body> tags are not found
              echo '<div>Body content not found in the file.</div>';
          }
      } else {
          // Display an error message if the file is not found or readable
          $renderHtml = '<div>Unable to load the content. Please check the file path.</div>';
      }


      $widgets_manager->register(new Elementor_BenefitSearch_Entrance_Widget());
}
add_action('elementor/widgets/register', 'register_benefit_search_entrance_widget');

/**
 * Register scripts and styles for Elementor test widgets.
 */
function akapluss_elementor_benefit_search_entrance_dependencies() {
  /* Font Awesome */
  wp_register_script(
      'font-awesome-kit', 
      'https://kit.fontawesome.com/36bb596d5c.js', 
      [], 
      null, 
      true
  );

	/* Styles */
  wp_register_style('akapluss-benefit-search-entrance-tailwindcss', plugins_url('css/tailwind.css', __FILE__));

	/* Blazor */
  wp_register_script('akapluss-benefit-search-entrance-blazor-framework', plugins_url('_framework/blazor.webassembly.js', __FILE__));

  /*wp_register_script(*/
  /*  'akapluss-benefit-search-entrance-blazor-pre-rendering', */
  /*  plugins_url('_content/BlazorWasmPreRendering.Build/BlazorWasmPreRendering.Build.lib.module.js', __FILE__),*/
  /*  ['akapluss-benefit-search-entrance-blazor-framework'], // Load after blazor.webassembly.js*/
  /*);*/


  /* Custom Blazor initialization script */
  wp_register_script(
      'akapluss-benefit-search-entrance-initialize-blazor',
      plugins_url('initialize-blazor.js', __FILE__),
      ['akapluss-benefit-search-entrance-blazor-framework'], // Load after blazor.webassembly.js
      null,
      true
  );
}
add_action('wp_enqueue_scripts', 'akapluss_elementor_benefit_search_entrance_dependencies');

/**
 * Add autostart="false" attribute to blazor.webassembly.js
 */
function akapluss_benefit_search_entrance_add_blazor_autostart_attribute($tag, $handle, $src) {
    if ('akapluss-benefit-search-entrance-blazor-framework' === $handle) {
        // Extract the original ID from the tag
        preg_match('/id=["\']?([^"\'>]+)/', $tag, $matches);
        $script_id = isset($matches[1]) ? $matches[1] : '';

        // Rebuild the script tag with autostart="false" and the original ID
        $tag = '<script src="' . esc_url($src) . '" autostart="false"';
        if ($script_id) {
            $tag .= ' id="' . esc_attr($script_id) . '"';
        }
        $tag .= '></script>';
    }
    return $tag;
}
add_filter('script_loader_tag', 'akapluss_benefit_search_entrance_add_blazor_autostart_attribute', 10, 3);
