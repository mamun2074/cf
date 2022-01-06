#include <stdio.h>
int main()
{
    int n, totalNumberOfFace = 0;
    char shaps[100];
    scanf("%d", &n);
    while (n--)
    {
        scanf("%s", &shaps);
        if (shaps[0] == 'T') // Tetrahedron =4
        {
            totalNumberOfFace += 4;
        }
        else if (shaps[0] == 'C') //Cube =6
        {
            totalNumberOfFace += 6;
        }
        else if (shaps[0] == 'O') // Octahedron = 8
        {
            totalNumberOfFace += 8;
        }
        else if (shaps[0] == 'D') //Dodecahedron =12
        {
            totalNumberOfFace += 12;
        }
        else if (shaps[0] == 'I') //Icosahedron = 20
        {
            totalNumberOfFace += 20;
        }
    }
    printf("%d \n", totalNumberOfFace);
}