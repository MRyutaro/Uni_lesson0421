int gcd(int n, int m);

int main(){
  int x, y;
  printf("2つの自然数を入力してください。\n");
  while(1){
    scanf("%d %d", &x, &y);
    if(x > 0 && y > 0){
      printf("%dと%dの最大公約数は%d", x, y, gcd(x, y));
      break;
    }
    else{
      printf("自然数を入力してください。\n");
    }
  }
return 0;
}

int gcd(int x, int y){
  if(y == 0){
    return x;
  }
  else{
    gcd(y, x%y);
  }
}

