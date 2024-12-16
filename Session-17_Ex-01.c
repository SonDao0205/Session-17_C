#include<stdio.h>
void addArr(int arr[],int currentLenght);
void displayArr(int arr[],int currentLenght);
int lenghtArr(int arr[],int currentLenght);
int sumArr(int arr[],int currentLenght);
int maxArr(int arr[],int currentLenght);

int main(){
    int choice,currentLenght;
    int arr[100];
    do
    {
        printf("______________________________________________\n");
        printf("                Menu                    \n");
        printf("1. Nhap vao so phan tu cua tung phan tu\n");
        printf("2. Hien thi cac phan tu trong mang\n");
        printf("3. Tinh do dai mang\n");
        printf("4. Ting tong cac phan tu trong mang\n");
        printf("5. Hien thi phan tu lon nhat\n");
        printf("6. Thoat\n");
        printf("______________________________________________\n");
        printf("Nhap lua chon cua ban : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Nhap so phan tu muon nhap  : ");
            scanf("%d",&currentLenght);
            addArr(arr,currentLenght);
            break;
        case 2:
            printf("Mang hien tai : \n");
            displayArr(arr,currentLenght);
            break;
        case 3:
            printf("Do dai cua mang la : %d\n",lenghtArr(arr,currentLenght));
            break;
        case 4:
            printf("Tong cac phan tu trong mang = %d\n",sumArr(arr,currentLenght));
            break;
        case 5:
            printf("Phan tu lon nhat trong mang la : %d\n",maxArr(arr,currentLenght));
            break;
        case 6:
            printf("Tam biet!!\n");
            break;
        default:
            printf("Khong hop le! Nhap lai!\n");
            break;
        }
        
    } while (choice != 6);
}

void addArr(int arr[],int currentLenght){
    int *ptrArray = arr;
    for (int i = 0; i < currentLenght; i++)
    {
        printf("Nhap arr[%d] = ",i);
        scanf("%d",ptrArray+i);
    }
}

void displayArr(int arr[],int currentLenght){
    int *ptrArray = arr;
    for (int i = 0; i < currentLenght; i++)
    {
        printf("arr[%d] = %d\n",i,*(ptrArray+i));
    }
}

int lenghtArr(int arr[],int currentLenght){
    int *ptrLenght = &currentLenght;
    return *ptrLenght;
}

int sumArr(int arr[],int currentLenght){
    int *ptrArray = arr;
    int sum = 0;
    for (int i = 0; i < currentLenght; i++)
    {
        sum += *(ptrArray+i);
    }
    return sum;
}

int maxArr(int arr[],int currentLenght){
    int *ptrArray = arr;
    int max = *ptrArray;
    for (int i = 0; i < currentLenght; i++)
    {
        if (max < *(ptrArray+i))
        {
            max = *(ptrArray+i);
        }
    }
    return max;
}