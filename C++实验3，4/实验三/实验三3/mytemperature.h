
double celsius_to_fah(double cel) {
	double fah = 0;
	fah = 32.0 + cel * 9/5;

	return fah;
}

double fahrenheit_to_cels(double fah) {
	double cel = (fah - 32.0) / 1.8;

	return cel;
}