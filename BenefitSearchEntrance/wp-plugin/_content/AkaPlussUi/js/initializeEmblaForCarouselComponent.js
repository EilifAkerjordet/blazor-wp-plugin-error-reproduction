import EmblaCarousel from 'embla-carousel';

export function initializeEmblaForCarouselComponent (carouselElement, dotNetHelper, options = {}) {
    const embla = EmblaCarousel(carouselElement, options);

    if (dotNetHelper) {
        // No error if the function is not defined
        embla.on("select", () => dotNetHelper.invokeMethodAsync("EmblaOnSelect").catch(() => {}));
        embla.on("init", () => dotNetHelper.invokeMethodAsync("EmblaOnInit").catch(() => {}));
        embla.on("reInit", () => dotNetHelper.invokeMethodAsync("EmblaOnReInit").catch(() => {}));
    }

    return embla;
};