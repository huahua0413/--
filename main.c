#include <stdio.h>

int main(){
    int qian=0;

    printf("jinruyinhangcunqianquqianguanlixitong\n");
    while(1){
        int code;
        printf("1---cunqian\n");
        printf("2---quqian\n");
        printf("3---yue\n");
        printf("4---tuichu\n");
        printf("qingshurugongnengbianhao");
        scanf("%d",&code);
        if(code == 1){
            int cun;
            char x;
            printf("jinrucunqiangongneng,qingshuruyaocunrudejine\n");
            scanf("%d",&cun);
            qian += cun;
            printf("cunruchenggong,dianjihuichejixu");
            scanf("%c",&x);
            scanf("%c",&x);
        }
        if(code == 2){
            int qu;
            char x;
            printf("jinruquqiangongneng,qingshuruyaoquchudejine\n");
            scanf("%d",&qu);
            if(qian>=qu){
                qian -= qu;
                printf("quqianchenggong,dianjihuichejixu");
                scanf("%c",&x);
                scanf("%c",&x);
            }
            else{
                printf("yuebuzu,quqianshibai,dianjihuichejixu");
                scanf("%c",&x);
            }
        }
        if(code == 3){
            char x;
            printf("dangqianyuewei:%d\n",qian);
            printf("dianjihuichejixu\n");
            scanf("%c",&x);
            scanf("%c",&x);
        }
        if(code == 4){
            printf("chengxujieshu\n");
            break;
        }
    }

    return 0;

}