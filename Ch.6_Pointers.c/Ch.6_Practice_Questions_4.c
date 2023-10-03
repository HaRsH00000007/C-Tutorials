// Q   --> Will the address output be same ?
// Ans --> No

void printAddress(int n);

int main(){
    int n = 4;
    printAddress(n);
    printf("address of n is : %u \n", &n);
    return 0;
}


// Call By Value
void printAddress(int n){
    printf("address of n is : %u \n", &n);
}