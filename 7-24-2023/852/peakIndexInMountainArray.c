int peakIndexInMountainArray(int* arr, int arrSize){
  
  for(int i = 1; i < arrSize - 1; i+=1) {
    
    if(arr[i] > arr[i-1] && arr[i] > arr[i+1]) {

      return i;
    }

  }
  return -1;
}
