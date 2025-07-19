    int (*ptr)[2][2] = arr + 2;
    printf("%d \n", *(*(*(ptr - 1) + 1) + 0));
    printf("%d \n", *(*(*(arr + 1) + 0) + 1));
    printf("%d \n", *(*(*(ptr) + 0) + 1));
    return 0;
}
    

#include<stdio.h>
int main() {
    char str1[] = "DynamicProgramming";
    char str2[] = "isAwesome!";
    char *p1 = str1, *p2 = str2 + 2;
    printf("%c\n", *(p1 + 7));
    printf("%s\n", p2 + 3);
    printf("%c\n", (*(p1) + (*(p2 + 1) - 'a')));
    printf("%c",90);
    return 0;
}


#include<stdio.h>
int main() {
    char str[] = "PointersAreCool";
    char *ptr = str + 3;
    printf("%c \n", *(ptr + 2));
    printf("%s \n", ptr + 5);
    printf("%c \n", *(ptr - 2 + (*(ptr + 4) - 'A')));
    return 0;
}



#include<stdio.h>
int main() {
    int arr[2][2][3] = { { {5, 10, 15}, {20, 25, 30} }, { {35, 40, 45}, {50, 55, 60} } };
    int (*ptr)[2][3] = arr + 1;
    printf("%d \n", *(*(*(ptr) + 1) + 1));
    printf("%d \n", *(*(*(ptr - 1) + 0) + 2));
    printf("%d \n", *(*(arr[1] + 1) + 0) - *(*(*(arr) + 1) + 1));
    return 0;
}

*/

typedef struct loc{
    int x,y;
} location;

int main(){

    location* p;
    int N;
    printf("enter number of misile ");
    scanf("%d",&N);

    p = (location*)malloc(N*sizeof(location));
 
    
    if(p==NULL)
    {
    printf("Memory allocation failed");
    return 0;
    }