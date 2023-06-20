/**
 * jack_bauer - prints every minute of a 24-hour day
 *
 * Description: Prints the time in the format HH:MM
 *              from 00:00 to 23:59.
 */
void jack_bauer(void)
{
    int a, b, c, d;

    for (a = 0; a <= 2; a++)
    {
        for (b = 0; b <= 9; b++)
        {
            for (c = 0; c <= 5; c++)
            {
                for (d = 0; d <= 9; d++)
                {
                    if (a >= 2 && b >= 4)
                        break;
                    _putchar(a + '0');
                    _putchar(b + '0');
                    _putchar(':');
                    _putchar(c + '0');
                    _putchar(d + '0');
                    _putchar('\n');
                }
            }
        }
    }
}
