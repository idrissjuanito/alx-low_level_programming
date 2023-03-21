#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hour = 0;
	int minute;

	while (hour < 24)
	{
		int fd = hour / 10;
		int ld = hour % 10;

		for (minute = 0; minute < 60; minute++)
		{
			int fmd = minute / 10;
			int lmd = minute % 10;

			_putchar(fd + '0');
			_putchar(ld + '0');
			_putchar(':');
			_putchar(fmd + '0');
			_putchar(lmd + '0');
			_putchar('\n');
		}
		hour++;
	}
}
