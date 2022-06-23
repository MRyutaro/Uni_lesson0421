int f(int n);

int main(){
  int x;
  while(1){
    printf("自然数を入力してください。\n");
    scanf("%d", &x);
    if(1 <= x && x <= 10){
      printf("%d! = %d\n", x, f(x));
    }
    else{
      break;
    }
  }
return 0;
}

int f(int n){
  if(n == 0){
    return 1;
  }
  else{
    return n*f(n-1);
  }
}
