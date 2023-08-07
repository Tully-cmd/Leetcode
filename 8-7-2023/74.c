bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){
  //printf("matrixSize: %d\n*matrixColSize: %d\n",matrixSize,*matrixColSize);
  //printf("*matrixColSize * matrixSize: %d\n",*matrixColSize * matrixSize);
  int * i = malloc(4);
  int * j = malloc(4);

  for(*i = 0; *i < matrixSize; *i+=1) {
    //printf("i: %d\n",*i);

    if(target > matrix[*i][*matrixColSize - 1]) {
      continue;
    }

    for(*j = 0; *j < *matrixColSize; *j+=1) {
      //printf(" j: %d\n",j);
      //printf("matrix[i][j]: %d\n",matrix[*i][j]);
      if(matrix[*i][*j] == target) {
        free(i);
        free(j);
        return true;
      }

      if(matrix[*i][*j] > target) {
        free(i);
        free(j);
        return false;
      }
    }

  }
  free(i);
  free(j);
  return false;
}
