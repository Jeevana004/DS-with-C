#include<stdio.h>
void main()
{
int i,e,j,n,u,v,adj[30][30];

printf("enter the no.vertices\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++){
adj[i][j]=0;
}
}
printf("enter the no.of edges\n");
scanf("%d",&e);
for(i=0;i<e;i++)
{
printf("enter source and destination values\n");
scanf("%d%d",&u,&v);
adj[u][v]=1;
adj[v][u]=1;
}
printf("printing the graph\n");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
printf("%d",adj[i][j]);
}
printf("\n");
}
getch();
}
