// // develop a program to perform multiplication of two matrix.


// #include<stdio.h>
// void main(){
//     int n;
//     printf("Entet the size of matrix :");
//     scanf("%d",&n);

//     int mx1[n][n],mx2[n][n],multi[n][n],i,j,l,m,sum=0;

//     printf("Matrix -- 1\n");
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             printf("Enter the Number :");
//             scanf("%d",&mx1[i][j]);
//         }
//     }

//     printf("Matrix -- 2\n");
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             printf("Enter the Number :");
//             scanf("%d",&mx2[i][j]);
//         }
//     }

//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             sum=sum+(mx1[i][j]*mx2[l][m]);
//             l++;
//             if(j==m){
//                 for(i=0;i<n;i++){
//                     for(j=0;j<n;j++){
                        
//                     }
//                 }
//             }
//         }
//     }
// }


// Devlop a program to addition of two matrix


// #include<stdio.h>
// void main(){
//     int n;
//     printf("Entet the size of matrix :");
//     scanf("%d",&n);

//     int mx1[n][n],mx2[n][n],i,j;

//     printf("Matrix -- 1\n");
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             printf("Enter the Number :");
//             scanf("%d",&mx1[i][j]);
//         }
//     }

//     printf("Matrix -- 2\n");
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             printf("Enter the Number :");
//             scanf("%d",&mx2[i][j]);
//         }
//     }

//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             mx1[i][j]=mx1[i][j]+mx2[i][j];
//         }
//     }

//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             printf("%d ",mx1[i][j]);
//         }
//         printf("\n");
//     }
// }


//  WAP to count number of positive,negetive and zero from 3 * 3 matrix


// #include<stdio.h>
// void main(){
//     int num[3][3],i,j,zero=0,positive=0,negative=0;

//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("Enter the Number :");
//             scanf("%d",&num[i][j]);
//         }
//     }

//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("%d ",num[i][j]);
//             if(num[i][j]>=0){
//                 if(num[i][j]==0){
//                     zero=zero+1;
//                 }
//                 else{
//                     positive=positive+1;
//                 }
//             }
//             else{
//                 negative=negative+1;
//             }
//         }
//         printf("\n");
//     }

//     printf("Numbers of Zeros=%d\n",zero);
//     printf("Numbers of positive Numbers=%d\n",positive);
//     printf("Numbers of neative Numbers=%d\n",negative);
// }


// 2-D ARRAY


// #include<stdio.h>
// void main(){
//     int data[3][3],i,j;

//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("Enter the number :");
//             scanf("%d",&data[i][j]);
//         }
//     }

//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("%d ",data[i][j]);
//         }
//         printf("\n");
//     }
// }