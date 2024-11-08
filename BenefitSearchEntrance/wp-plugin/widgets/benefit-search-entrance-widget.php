<?php

if (!defined('ABSPATH')) {
    exit; // Exit if accessed directly.
}

class Elementor_BenefitSearch_Entrance_Widget extends \Elementor\Widget_Base {

    public function get_name() {
        return 'benefit_search_entrance';
    }

    public function get_title() {
        return __('Benefit Search Entrance', 'benefit-search-entrance');
    }

    public function get_icon() {
        return 'eicon-code';
    }

    public function get_categories() {
        return ['general'];
    }

    public function get_script_depends() {
      return [ 
        'font-awesome-kit',
        'akapluss-benefit-search-entrance-blazor-framework', 
        /*'akapluss-benefit-search-entrance-blazor-pre-rendering',*/
        'akapluss-benefit-search-entrance-initialize-blazor',
      ];
    }

    public function get_style_depends() {
      return [ 'akapluss-benefit-search-entrance-tailwindcss' ];
    }

    /* Extracts the body content from the index.html file. */
    protected function render() {
        // Path to your index.html file, relative to the plugin directory
        $file_path = plugin_dir_path(__FILE__) . '../index.html';

        // Check if the file exists and is readable
        if (file_exists($file_path) && is_readable($file_path)) {
            // Read the contents of the file
            $content = file_get_contents($file_path);

            // Use a regular expression to extract content between the <body> tags
            if (preg_match('/<body[^>]*>(.*?)<\/body>/is', $content, $matches)) {
                // Extract the content found inside the body
                $body_content = $matches[1];

                // Remove all <script> tags and their content
                $body_content = preg_replace('/<script\b[^>]*>(.*?)<\/script>/is', '', $body_content);

                // Echo the cleaned content
                echo $body_content;
            } else {
                // Display an error message if <body> tags are not found
                echo '<div>Body content not found in the file.</div>';
            }
        } else {
            // Display an error message if the file is not found or readable
            echo '<div>Unable to load the content. Please check the file path.</div>';
        }
    }
}
