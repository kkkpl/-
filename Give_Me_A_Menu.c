#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <dirent.h>
#include <errno.h>
#include <sys/stat.h>
#include <fcntl.h>
#define _CRT_SECURE_NO_WARNINGS 


void menuname(int a)  //데이터셋에 있는 메뉴의 이름을 출력해주는 함수
{
        switch(a)
        {
                case 1: printf("1.감자 짜글이\n"); break;
                case 2: printf("2.카레 \n"); break;
                case 3: printf("3.짜장 \n"); break;
                case 4: printf("4.김치찌개\n"); break;
                case 5: printf("5.된장찌개 \n");  break;
                case 6: printf("6.고추장찌개 \n"); break;
                case 7: printf("7.계란 볶음밥 \n"); break;
                case 8: printf("8.제육볶음\n"); break;
                case 9: printf("9.두부조림 \n"); break;
                case 10: printf("10.어묵볶음 \n"); break;
                case 11: printf("11.스팸마요덮밥\n"); break;
                case 12: printf("12.계란 김국 \n"); break;
                case 13: printf("13.계란 밥전 \n"); break;
                case 14: printf("14.계란 장조림 \n"); break;
                case 15: printf("15.스팸 김치 볶음밥 \n");  break;
        }
}

void  youtube(int a) //유튜브 영상 추천을 위해 메뉴를 출력하는 함수
{
        switch(a)
        {
                case 1: printf("감자 짜글이"); break;
                case 2: printf("카레"); break;
                case 3: printf("짜장"); break;
                case 4: printf("김치찌개"); break;
                case 5: printf("된장찌개");  break;
                case 6: printf("고추장찌개"); break;
                case 7: printf("계란 볶음밥"); break;
                case 8: printf("제육볶음"); break;
                case 9: printf("두부조림 "); break;
                case 10: printf("어묵볶음 "); break;
                case 11: printf("스팸마요덮밥"); break;
                case 12: printf("계란 김국"); break;
                case 13: printf("계란 밥전"); break;
                case 14: printf("계란 장조림"); break;
                case 15: printf("스팸 김치 볶음밥");  break;
        }
}



int main()
{
   int fd; 
   char me[1000];
   char buf[1000] = "1) 감자2) 양파3) 마늘4) 대파5)고추6) 당근7) 호박8) 양배추9) 콩나물10) 오이 11) 참치12) 스팸13) 돼지고기14) 닭고기15) 계란16) 두부17) 고추장18) 고춧가루19) 된장20) 진간장21) 국간장22) 마요네즈23) 후추24) 설탕25) 멸치26) >오징어27) 카레가루28) 짜장가루29) 당면30) 김치31) 식용유32) 참기름33) 떡34) 어묵 35) 굴소스36) 김\n"; // 재료의 내용을 출력
  fd = open("./opentest", O_WRONLY | O_CREAT | O_TRUNC, S_IWUSR | S_IRUSR | S_IWGRP | S_IRGRP | S_IROTH); //fd 이름의 파일 open
   if(fd==-1) //open함수 오류 검사
       printf("File Open Error\n");
   write(1, buf, sizeof(buf));
   
   close(fd);

 int rec[16][36]={{1,1,1,1,1,0,0,0,0,0,1,1,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                {1,1,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0},
                {1,1,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0},
                {0,1,1,1,0,0,0,0,0,0,1,1,1,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0},
                {1,1,1,1,0,0,1,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0},
                {1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0},
                {0,1,1,1,1,0,0,0,0,0,0,0,1,0,0,0,1,1,0,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0},
                {0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0},
                {0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0,0,0,1,0,0,0,0,0,0,1,1,0,0,0,0},
                {0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,1,1,0,0,0,0,0,0,1,1,0,1,0,0},
                {0,0,0,1,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0},
                {0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1},
                {0,0,0,1,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0},
                {0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0},
                {0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,1,0,0,0,0,0},
                {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}; // 1행~15행:레시피마다 재료값의 유무를 배열의 값을 넣음, 16행:사용자로부터 재료를 입력받는 배열
   int count[15]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}; // 각 재료에 대한 일치도를 기록하는 배열


int a;
char *p;
char ingre[100]; //사용자로부터 재료 값들을 입력 받는다.
scanf("%[^\n]s",ingre); 

p=strtok(ingre," "); //공백 입력시 없앤다.
while(p!=NULL){
a=atoi(p)-1; //문자를 정수 값으로 바꿔준다.
rec[15][a]=1; //배열의 열 값이 재료를 의미함. 1로 채운다.
p=strtok(NULL," ");
}

   int i=0, j=0, sum=0, value=0;

   for(i=0;i<15;i++)
   {
      sum=0;
      for(j=0;j<36;j++)
      {
         value=rec[i][j]*rec[15][j]; //사용자가 입력한 값과, 재료 값들을 비교한다.
         sum=value+sum; //매칭되는 재료 값의 개수를 모두 더한다.
      }
      count[i]=sum;
   }

   int k=0, max=0, maxmenu[15], num=1;

   for(i=0;i<15;i++)
   {
      if(count[i]>max) //매칭되는 재료 값의 최대 개수를 max에 넣는다
      {
        for(k=0;k<15;k++)
        {
           maxmenu[k]='\0';
        }
         max=count[i];
         maxmenu[0]=i;
         num=1;
      }
      else if(count[i]==max) //max값이 일치되는 재료 값이 또 있을 경우
      {
         maxmenu[num]=i; //여러 추천메뉴를 주기 위함.
         num++;
      }
   }

char s1[1024];

  if(maxmenu[1]=='\0') //maxmenu에서마지막인 경우, 아래를 출력한다.
   {
      printf("해당되는 검색결과가 하나입니다.\n\n"); 
      sprintf(s1,"%d",maxmenu[0]+1); //메뉴 인덱스 값이 0부터 시작이기에 1을 더해 출력한다. 
	k=maxmenu[0]+1; //maxmeue 인덱스 값이 0이기에 1을 더해서 1. 메뉴를 넣어준다.
	
   }
   else
   {
      for(a=1;maxmenu[a+1]!='\0';a++);  //위에서 일치 값이 큰 메뉴둘의 개수를  출력한다.
         printf("추천메뉴는 %d개 입니다.\n \n", a+1); 

int k; 
      for(i=0;i<a+1;i++)
      {
        k=maxmenu[i]+1;
        menuname(k); //일치하는 메뉴들의 이름들을 출력한다.
      }
        printf("\n위 메뉴 중 마음에 드는 레시피의 번호를 입력해주세요.");  
      scanf("%s", s1); //위에서 출력되는 레시피의 번호를 입력한다.
   }

k=atoi(s1);

char txt[800];
FILE *filep; 
char s2[5]=".txt";
char s3[1024];
memset(s3,0,sizeof(s3));

chdir("teamproject");
getcwd(s3,sizeof(1024));

write(1,s3,sizeof(s3));

if(s3 == NULL)
{
	fprintf(stderr, "current working directory get error : %s\n", strerror(errno));
}

   strcat(s1, s2);
   strcat(s3, s1);
   
char *c = s3;
memset(txt,0,sizeof(txt)); //txt의 쓰레기 값을 초기화 해준다.


   filep=fopen(c, "r"); 
   fread(txt, sizeof(txt),1,filep); 

int fd1;
fd1 = open("recipe", O_WRONLY | O_CREAT | O_TRUNC, S_IWUSR | S_IRUSR | S_IWGRP | S_IRGRP | S_IROTH); //fd1 파일을 open한다.
   if(fd1==-1) 
       printf("File Open Error\n");

   write(1, txt, sizeof(txt)); //txt파일을 출력한다. 


pid_t friend = fork(); //fork함수를 통해 freind변수에 리턴 값을 넣는다.

if(friend==0) //자식 프로세스일 때 아래를 출력하도록 한다.
{
   printf("\n\n혼자 먹기 쓸쓸하시죠? 당신은 혼자가 아닙니다!같이 밥을 먹어줄 친구들을 소개합니다\n");
   printf("https://www.youtube.com/results?search_query=먹방");
   youtube(k);
   printf("\n위의 링크를인터넷주소창에 복붙하세요\n즐거운 식사시간되세요~\n\n");
}
   fclose(filep); //파일을 close한다
   return 0;

}
