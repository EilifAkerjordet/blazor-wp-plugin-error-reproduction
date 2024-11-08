#!/bin/bash

# Define paths
APP_DIR=$(pwd)                     # Root directory of your Blazor project
PLUGIN_DIR="$APP_DIR/wp-plugin"    # WordPress plugin output folder

echo "Building .NET Blazor app..."
# Will make use of appsettings.WpWidget.json
rm -rf "$APP_DIR/dist"

dotnet publish -c Release -o "$APP_DIR/dist"

# Step 3: Set up the WordPress plugin folder structure
echo "Setting up plugin folder structure..."
mkdir -p "$PLUGIN_DIR"

# Step 4: Copy built assets to the plugin folder
echo "Copying built assets to plugin folder..."

cp -rf "$APP_DIR/dist/wwwroot/"* "$PLUGIN_DIR/"

echo "Plugin setup complete"
