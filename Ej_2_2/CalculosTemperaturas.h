int gradosKelvin(int c);
int gradosFahrenheit(int c);

int gradosKelvin(int celsius)
{
	int kelvin;
	kelvin = celsius + 273;
	return kelvin;
}

int gradosFahrenheit(int celsius)
{
	int fahrenheit;
	fahrenheit = (celsius*9/5) + 32;
	return fahrenheit;
}
