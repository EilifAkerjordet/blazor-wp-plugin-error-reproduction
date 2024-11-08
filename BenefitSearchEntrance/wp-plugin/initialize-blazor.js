Blazor.start({
    loadBootResource: (type, name, defaultUri, integrity) => {
        const basePluginPath = '/wp-content/plugins/akapluss-benefit-search-entrance/_framework/';
        return basePluginPath + name;
    },
});
