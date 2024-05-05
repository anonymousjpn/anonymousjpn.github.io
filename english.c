#include<stdio.h>
int title(){
   int english[7][43]={{1,1,1,1,0,1,0,0,0,0,0,1,0,0,1,1,1,1,1,0,0,1,0,0,0,0,0,0,1,0,0,1,1,1,0,0,1,0,0,0,0,0,1},
                       {1,0,0,0,0,1,1,0,0,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,0,1},
                       {1,0,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,1,0,0,0,0,1,0,0,0,0,0,1},
                       {1,1,1,1,0,1,0,0,1,0,0,1,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,1,1,1,1,1,1},
                       {1,0,0,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,1,1,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,0,1,0,0,0,0,0,1},
                       {1,0,0,0,0,1,0,0,0,0,1,1,0,1,0,0,0,0,1,1,0,1,0,0,0,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,0,1},
                       {1,1,1,1,0,1,0,0,0,0,0,1,0,0,1,1,1,1,0,1,0,1,1,1,1,1,1,0,1,0,0,1,1,1,0,0,1,0,0,0,0,0,1}
   };
   for(int i=0;i<7;i++){
    for(int j=0;j<43;j++){
        printf("%s",english[i][j]==1?"■":" ");
    }
    printf("\n");
   }
   printf("英検2級レベルの英単語の問題です\n英単語の意味として最も適切なものを選んで下さい\nHPが0になるとゲームオーバーになります\n");
   printf("1を押してスタート\n");
   char a[100];
   int n;
   fgets(a,sizeof(a),stdin);
   sscanf(a,"%d\n",&n);
   if(n==1){
    return 1;
   }else{
        while(n!=1){
        printf("1を押して下さい\n");
        fgets(a,sizeof(a),stdin);
        sscanf(a,"%d\n",&n);
    }
   }
}
int main(){
    int hp=5;
    int A=0;
    int n;
    if(title()==1){
        printf("No.1 cause\n1.引き起こす\n2.出かける\n3.生産する\nプレイヤーの残りHP%d\n",hp);
    }else{
        return 0;
    }
    char a[100];
    fgets(a,sizeof(a),stdin);
    sscanf(a,"%d\n",&n);
    if(n==1){
        A++;
        printf("正解\nプレイヤーの残りHP%d\n",hp);
        
    }else{
        hp--;
        if(hp<=0){
            printf("不正解\nゲームオーバー\n");
            return 0;
        }else{
            printf("不正解\nプレイヤーの残りHP%d\n",hp);
        }
    }
    printf("No.2 increase\n1.生活する\n2.増加する\n3.改築する\nプレイヤーの残りHP%d\n",hp);
    char b[100];
    fgets(b,sizeof(b),stdin);
    sscanf(b,"%d\n",&n);
    if(n==2){
        A++;
        printf("正解\nプレイヤーの残りHP%d\n",hp);
        }else{
        hp--;
        if(hp<=0){
            printf("不正解\nゲームオーバー\n");
            return 0;
        }else{
            printf("不正解\nプレイヤーの残りHP%d\n",hp);
        }
    }
    printf("No.3 prepare\n1.準備する\n2.待つ\n3.保存する\nプレイヤーの残りHP%d\n",hp);
    char c[100];
    fgets(c,sizeof(c),stdin);
    sscanf(c,"%d\n",&n);
    if(n==1){
        A++;
        printf("正解\nプレイヤーの残りHP%d\n",hp);
        }else{
        hp--;
        if(hp<=0){
            printf("不正解\nゲームオーバー\n");
            return 0;
        }else{
            printf("不正解\nプレイヤーの残りHP%d\n",hp);
        }
    }
    printf("No.4 suggest\n1.想像する\n2.確認する\n3.提案する\nプレイヤーの残りHP%d\n",hp);
    char d[100];
    fgets(d,sizeof(d),stdin);
    sscanf(d,"%d\n",&n);
    if(n==3){
        A++;
        printf("正解\nプレイヤーの残りHP%d\n",hp);
        }else{
        hp--;
        if(hp<=0){
            printf("不正解\nゲームオーバー\n");
            return 0;
        }else{
            printf("不正解\nプレイヤーの残りHP%d\n",hp);
        }
    }
    printf("No.5 cost\n1.計算する\n2.費用がかかる\n3.分割する\nプレイヤーの残りHP%d\n",hp);
    char e[100];
    fgets(e,sizeof(e),stdin);
    sscanf(e,"%d\n",&n);
    if(n==2){
        A++;
        printf("正解\nプレイヤーの残りHP%d\n",hp);
        }else{
        hp--;
        if(hp<=0){
            printf("不正解\nゲームオーバー\n");
            return 0;
        }else{
            printf("不正解\nプレイヤーの残りHP%d\n",hp);
        }
    }
    printf("No.6 repair\n1.改善する\n2.修理する\n3.再生する\nプレイヤーの残りHP%d\n",hp);
    char f[100];
    fgets(f,sizeof(f),stdin);
    sscanf(f,"%d\n",&n);
    if(n==2){
        A++;
        printf("正解\nプレイヤーの残りHP%d\n",hp);
        }else{
        hp--;
        if(hp<=0){
            printf("不正解\nゲームオーバー\n");
            return 0;
        }else{
            printf("不正解\nプレイヤーの残りHP%d\n",hp);
        }
    }
    printf("No.7 research\n1.調査\n2.書類\n3.参照\nプレイヤーの残りHP%d\n",hp);
    char g[100];
    fgets(g,sizeof(g),stdin);
    sscanf(g,"%d\n",&n);
    if(n==1){
        A++;
        printf("正解\nプレイヤーの残りHP%d\n",hp);
        }else{
        hp--;
        if(hp<=0){
            printf("不正解\nゲームオーバー\n");
            return 0;
        }else{
            printf("不正解\nプレイヤーの残りHP%d\n",hp);
        }
    }
    printf("No.8 environment\n1.衣類\n2.利便性\n3.環境\nプレイヤーの残りHP%d\n",hp);
    char h[100];
    fgets(h,sizeof(h),stdin);
    sscanf(h,"%d\n",&n);
    if(n==3){
        A++;
        printf("正解\nプレイヤーの残りHP%d\n",hp);
        }else{
        hp--;
        if(hp<=0){
            printf("不正解\nゲームオーバー\n");
            return 0;
        }else{
            printf("不正解\nプレイヤーの残りHP%d\n",hp);
        }
    }
    printf("No.9 metal\n1.金属\n2.鉄\n3.元素\nプレイヤーの残りHP%d\n",hp);
    char i[100];
    fgets(i,sizeof(i),stdin);
    sscanf(i,"%d\n",&n);
    if(n==1){
        A++;
        printf("正解\nプレイヤーの残りHP%d\n",hp);
        }else{
        hp--;
        if(hp<=0){
            printf("不正解\nゲームオーバー\n");
            return 0;
        }else{
            printf("不正解\nプレイヤーの残りHP%d\n",hp);
        }
    }
    printf("No.10 experience\n1.実験\n2.経験\n3.人生\nプレイヤーの残りHP%d\n",hp);
    char j[100];
    fgets(j,sizeof(j),stdin);
    sscanf(j,"%d\n",&n);
    if(n==2){
        A++;
        printf("正解\nプレイヤーの残りHP%d\n",hp);
        printf("おめでとうございます。10問中%d問正解です。",A);
        }else{
        hp--;
        if(hp<=0){
            printf("不正解\nゲームオーバー\n");
            return 0;
        }else{
            printf("不正解\nプレイヤーの残りHP%d\n",hp);
            printf("おめでとうございます。10問中%d問正解です。",A);
        }
    }
}
    


