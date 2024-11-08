# README.md

## Setup
**Locally everything is expected to run fine.**

## Running as a plugin in WP (Steps to reproduce)
**In order for Blazor to work on the WP server, the app needs to be booted by a custom Blazor.start, in order to load resources from the correct path. See `BenefitSearchEntrance/wp-plugin/initialize-blazor.js`.**
 - This only runs on the WP server. Locally/normally there is no need for this.

**I am including a completed build in `BenefitSearchEntrance/wp-plugin` so step 1 should be skippable.**

See `docker-compose.yml`.

1. Run the bash script `BenefitSearchEntrance/generate-wp-plugin.sh`. This will build the app and set up the plugin that is linked to the WP docker container.
2. Run `docker-compose up`, the local folder `BenefitSearchEntrance/wp-plugin` is linked to the plugin folder of the WP container `/var/www/html/wp-content/plugins/akapluss-benefit-search-entrance`
3. Go to `localhost/admin` and complete the setup
4. Go to plugins in the left sidebar, click `Add new plugin` and search for, then install `Elementor`
5. Go back to plugins and click activate on `Elementor` then complete the setup wizard. Dosent matter what template etc that you choose
6. Go back to plugins again and activate `Benefit Search Entrance` (our Blazor plugin)
7. Go to "Pages" in the left menu at `localhost/admin` and create a new page. Click "Edit With Elementor".
8. When editing a page, search for `BenefitSearchEntrance` in the left menu and drag the widget anywhere on the page.
9. Click `publish` on the top right of the page, then arrow next to publish and `view page` in the dropdown menu.

You should now be able to see some network and console errors.
