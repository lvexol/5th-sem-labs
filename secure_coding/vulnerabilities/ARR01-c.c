void wclear(int arr[]){
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        arr[i] = 0;
    }
}
void rclear(int arr[],int size){
    for(int i = 0; i < size; i++){
        arr[i] = 0;
    }
}

void main(){
    int arr[5];
    wclear(arr);
    rclear(arr,sizeof(arr)/sizeof(arr[0])); 
}