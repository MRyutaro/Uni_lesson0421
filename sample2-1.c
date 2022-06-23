float area(float a, float b, float c);

int main(){
  float a, b, c;
  int equ_tri = 0, tri = 0; /*0=False, 1=True*/
  while(equ_tri == 0){ /*正三角形だったら抜ける。正三角形じゃなかったらループ*/
    printf("三角形の3辺の長さを入力してください\n");
    scanf("%f %f %f", &a, &b, &c);   

    if(a == b && b == c && c == a && a != 0){ 
       equ_tri = 1;
    }
    else{
      while(tri == 0){ /*三角形だったら抜ける。三角形じゃなかったらコメントアウトして抜ける*/
        if(a+b>c && b+c>a && c+a>b){
          tri = 1;
        }
        else{
          printf("三角形を形成できません\n");
          break;
        }       
      }
    }
      
    
  }
  printf("MENSEKI = %f\n", area(a, b, c));
  return 0;
}

float area(float a, float b, float c){
  float s, area;
  s = (a+b+c)/2;
  area = sqrt(s*(s-a)*(s-b)*(s-c));
  return area;
}

/*
triとequ_triを導入した

*/