
#include<signal.h>
#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

int mydaemon()
{
	umask(0);
	pid_t id = fork();

	if(id>0)//father
	{
		exit(0);
	}
	//child
	signal(SIGCHLD,SIG_IGN);//ignore chld
	setsid();


	close(0);
	close(1);
	close(2);

	chdir("/");


}
int main(int argc,char* argv[])
{
	//mydaemon();
	daemon(0,0);
	while(1)
	{
		sleep(1);
	}

}

