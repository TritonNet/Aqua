using System.Device.Gpio;
using Triton.Aqua.Service;

IHost host = Host.CreateDefaultBuilder(args)
    .ConfigureServices(services =>
    {
        services.AddHostedService<Worker>();
    })
    .Build();

await host.RunAsync();

//Console.WriteLine("Blinking LED. Press Ctrl+C to end.");
//int pin = 2;
//using var controller = new GpioController();
//controller.OpenPin(pin, PinMode.Output);
//bool ledOn = true;
//while (true)
//{
//    controller.Write(pin, ((ledOn) ? PinValue.High : PinValue.Low));
//    Thread.Sleep(1000);
//    ledOn = !ledOn;
//}