#include"kernel/types.h"
#include"kernel/stat.h"
#include"kernel/fcntl.h"
#include"user/user.h"

int main()
{
	mkdir("/dir");
	int fd = open("/dir/file", O_CREATE | O_WRONLY);
	char* b = "asdqwe";
	write(fd,b,7);
	close(fd);
	return 0;
}
