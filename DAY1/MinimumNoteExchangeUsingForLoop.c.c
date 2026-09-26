
/*so the problem statement is m is a bigger amount given to shopkeeper,n is the actaul amount,
c is change given to customer , find minimum no.of notes used , its in c language*/
#include <stdio.h>

int main() {
    int m, n, c, t = 0;
    // Store all your note denominations in an array from largest to smallest
    int notes[] = {100, 50, 20, 10, 5, 2, 1}; 
    
    printf("Enter the amount m:");
    scanf("%d", &m);
    
    printf("Enter the amount n:");
    scanf("%d", &n);
    
    c = m - n; // Calculate total change required
    
    // Loop through the 7 denominations in the array
    for (int i = 0; i < 7; i++) {
        t = t + (c / notes[i]);  // Add the number of notes for the current denomination
        c = c % notes[i];        // Update 'c' to just be the remaining remainder
    }
    
    printf("The number of notes: %d", t);
    
    return 0;
}