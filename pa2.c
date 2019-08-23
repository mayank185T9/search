#include <stdio.h>


int recursive_binary_index(int key ,int arr[], int low,int high){
  //printf("%d\n",high );
  int btw = ((high + low)/2);
  printf("...\n" );
  printf("...\n" );
  printf("%d\n",btw);
  if (key>arr[btw]) {
    return recursive_binary_index(key,arr,btw+1,high);
    /*printf("%d\n",btw );*/
  }
  else if (key<arr[btw]) {
    return recursive_binary_index(key,arr,0,btw-1);
    /*printf("%d\n",btw );*/
  }
  else if (key==arr[btw]) {
    /*printf("%d\n",btw );*/
    return (btw);
  }
  else{
    printf("number not in array\n" );
    return 0;
  }

  // for (int i = 0; i < high; i++) {
  //   printf("%d
  //printf("\
}
}
int main(int argc, char const *argv[]) {
  int size;
  int key;
  int b[15];
  printf("enter key\n" );
  scanf("%d", &key);
  printf("enter yo size man\n" );
  scanf("%d",&size);
  for (int i = 0; i < size; i++) {
    if (i==0) {
      printf("enter num\n" );
      scanf("%d", &b[i]);
    }
    if (i!=0) {
      printf("enter next num\n" );
      scanf("%d", &b[i]);
    }
  }
  printf("%d",size);
  printf("the index is: arr[%d]\n", recursive_binary_index(key,b,0,size-1));
  return 0;
}
