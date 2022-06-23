int ast(int n);

int main(){
  int a;
  while(1){
    printf("記号を出力する数を入力して下さい。\n");
    scanf("%d", &a);
    if(a>0){
      ast(a);
    }
    else{
      printf("終了します。\n");
      break;
    }
  }
}

int ast(n){
  for(int i = 0; i < n; i++){
    printf("*");
  }
  printf("\n");
}