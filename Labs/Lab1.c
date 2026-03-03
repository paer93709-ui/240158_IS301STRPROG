#/*  Name: Raymond PAE 
    Date: 01/03/2026

*/


#include <stdio.h>

int main() {

    const float TV_PRICE = 400.00;
    const float MONITOR_PRICE = 220.00;
    const float FLASH_PRICE = 35.20;
    const float HARD_PRICE = 150.00;
    const float PRINTER_PRICE = 300.00;
    const float TAX_RATE = 0.0835;

    int tv, monitor, flash, hard, printer;

    float tvTotal, monitorTotal, flashTotal, hardTotal, printerTotal;
    float subtotal, tax, total;

    // Input
    printf("How Many TVs Were Sold? ");
    scanf("%d", &tv);

    printf("How Many Monitors Were Sold? ");
    scanf("%d", &monitor);

    printf("How Many Flash Drives Were Sold? ");
    scanf("%d", &flash);

    printf("How Many Hard Drives Were Sold? ");
    scanf("%d", &hard);

    printf("How Many Deskjet Printers Were Sold? ");
    scanf("%d", &printer);

    // Calculations
    tvTotal = tv * TV_PRICE;
    monitorTotal = monitor * MONITOR_PRICE;
    flashTotal = flash * FLASH_PRICE;
    hardTotal = hard * HARD_PRICE;
    printerTotal = printer * PRINTER_PRICE;

    subtotal = tvTotal + monitorTotal + flashTotal + hardTotal + printerTotal;
    tax = subtotal * TAX_RATE;
    total = subtotal + tax;

    // Output
    printf("\n");
    printf("QTY  DESCRIPTION       UNIT PRICE    TOTAL PRICE\n");
    printf("-------------------------------------------------------------\n");

    printf("%-4d %-15s %10.2f %14.2f\n", tv, "TV", TV_PRICE, tvTotal);
    printf("%-4d %-15s %10.2f %14.2f\n", monitor, "Monitor", MONITOR_PRICE, monitorTotal);
    printf("%-4d %-15s %10.2f %14.2f\n", flash, "Flash Drive", FLASH_PRICE, flashTotal);
    printf("%-4d %-15s %10.2f %14.2f\n", hard, "Hard Drive", HARD_PRICE, hardTotal);
    printf("%-4d %-15s %10.2f %14.2f\n", printer, "Deskjet Printer", PRINTER_PRICE, printerTotal);

    printf("                               ---------------------\n");
    printf("                               Subtotal: %10.2f\n", subtotal);
    printf("                               Tax:      %10.2f\n", tax);
    printf("                               Total:    %10.2f\n", total);
    printf("-------------------------------------------------------------\n");

    return 0;
}
