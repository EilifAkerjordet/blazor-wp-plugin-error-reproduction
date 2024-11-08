using Microsoft.AspNetCore.Components.WebAssembly.Hosting;
using BenefitSearchEntrance;

var builder = WebAssemblyHostBuilder.CreateDefault(args);

if (!builder.RootComponents.Any())
{
  builder.RootComponents.Add<App>("#akapluss-benefit-search-entrance-app");
}

ConfigureServices(builder.Services, builder.HostEnvironment.BaseAddress, builder.Configuration);

await builder.Build().RunAsync();

// 👇 extract the service-registration process to the static local function.
static void ConfigureServices(IServiceCollection services, string baseAddress, IConfiguration configuration)
{
  services.AddScoped(sp => new HttpClient { BaseAddress = new Uri(baseAddress) });
}
