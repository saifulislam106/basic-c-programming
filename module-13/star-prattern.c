
// star prattern
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// int main()
// {
//     int n;
//     int num=1;
//     scanf("%d", &n);
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=num; j++){
//             printf("%d ", j);
//         }
//         printf("\n");
//         num++;
//     }
//     return 0;
// }

// pramid prettern
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             printf(" ");
//         }
//         for(int j=1; j<=i; j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// check 2 array addition with plag
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for(int i=1; i<=n; i++){
//         scanf("%d", &a[i]);
//     }
//     int x;
//     int flag=0;
//     scanf("%d", &x);
//     for(int i=1; i<=n-1; i++){
//         for(int j=i+1; j<=n; j++){

//             if(a[i]+a[j]==x){
//                 flag=1;
//                 printf("%d %d\n", a[i], a[j]);
//                 printf("Yes\n");
//             }
//         }
       
//     }
//      if(flag==0){
//             printf("No\n");
//         }
//     return 0;
// }

#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=1; i<=n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=1; i<=n; i++){
        for(int j=i+1; j<=n; j++){
            if(a[i]<a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
       printf("%d ", a[i]);
    }
   
    return 0;
}

