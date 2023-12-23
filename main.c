/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eismail <eismail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 17:40:37 by eismail           #+#    #+#             */
/*   Updated: 2023/12/23 11:13:39 by eismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
int main ()
{
	char p[8];
	// ft_memset(p, 65,5*sizeof(char));
	ft_memset(p, 65,7*sizeof(char));
	printf("%s\n",p);	
}
*/

/*
int main ()
{
	char *p = ft_strchr("this is my mantions @ism_417 and @cr7",'@');
	printf("%s\n",p);
	printf("-----------------\n");
	char *d = strchr("this is my mantions @ism_417 and @cr7",'@');
	printf("%s\n",d);
}
*/

/*
int main ()
{
	printf("%lu",ft_strlen("hello\0"));
}
*/

/*
int main ()
{
	printf("%d",ft_isalnum(65));
}
*/
/*
int main ()
{
	char p[10];
	char d[10];

	ft_bzero(p,10);
	bzero(d,10);
	printf("%s\n",d);
	printf("%s\n",p);
}
*/
/*
int main ()
{
	printf("%c",ft_toupper('5'));
}
*/
/*
int main ()
{
	printf("%c",ft_tolower('5'));
}
*/
/*
int main ()
{
	char p[]="hello";
	char *d=ft_strchr(p,'~');
	printf("%s\n",d);
	printf("%s\n",p);
}
*/
/*
int main ()
{
	char src1[10]= "\0";
	char src2[10]= "\0";
	char *p1;
	char *p2;
	int x = 0;


	p1 = ft_memcpy(((void *)0), ((void *)0), x);
	printf("dest: %s\n",p1);
	p2 = memmove(src2 + 2,src2, x);
	printf("dest: %s\n",p2);
}
*/
/*
int main ()
{
	char s[] = "trilploulille ";
	char *p = ft_strrchr(s,'l');
	printf("|%s| \n",p);
}
*/
/*
int main ()
{
	char p[]="ab\0c";
	char d[]="ab\0C"; 
	int n = ft_memcmp(p,d,4);
	printf("%d",n);
}
*/
/*
int main ()
{
	char p1[]="this is my mantions @ism_417";
	char *p = ft_memchr(p1,'@',sizeof(p1));
	printf("%s\n",p);
	printf("-----------------\n");
	char *d = memchr(p1,'@',sizeof(p1));
	printf("%s\n",d);
}
*/
/*
int main ()
{
	char dest[20]="this is ";
	char src[]="temp text";
	int i;

	i =ft_strlcat(dest,src,11);

	printf("size : %d | dest :%s ",i,dest);
}
*/
/*
int main ()
{
	char *p= ft_strnstr("temp text @ temp text2 @yaya","text2",25);
	printf("%s",p);
}
*/
/*
int main ()
{
	int nbr = ft_atoi("  -1337");
	printf("nbr = %d",nbr);
}
*/
/*
int main ()
{
	int i = 0;
	char  *p = calloc(10,sizeof(char));
	
	while (i <= 10)
	{
		printf(":%c:\n",p[i]);
		i++;
	}
	free (p);
}
*/
/*
int main ()
{
	char *p = ft_strdup("\0");
	printf("%s",p);
}
*/
/*
int main ()
{
	char *ptr = ft_substr("hola",4294967295,0);
	printf("the day is %s",ptr);
}
*/
/*
int main ()
{
	char str1[] = "hello ";
	char str2[] = "world!";
	char *str3 = ft_strjoin(str1,str2);

	printf("str1 join with str2 : |%s|",str3); 
	free (str3);
}
*/
/*
int main ()
{
	char text[] = "101010hello w10orld101010";
	char *p = ft_strtrim(text,"10");
	printf("text : |%s|",p);
}
*/
/*
int main ()
{
	// char p[] = "      split       this for   me    !";
	char **ptr = ft_split("hello!",' ');
	int i = 0;
	while (ptr[i] != NULL)
	{
		printf("|%s|\n",ptr[i]);
		i++;
	}
	
	free (ptr);
}
*/
/*
int main ()
{
	int num = -2147483648;
	char *str= ft_itoa(num);

	printf("num : |%s|\n",str);
	printf("%d",num);
	free(str);
}
*/

/*
char to_upper(unsigned int i, char c)
{
	void (i);
    if (c >= 'a' && c <= 'z')
        return c -= 32;
    return c;
}
int main()
{
    char *str = "hello, world!";
    char *result = ft_strmapi(str, to_upper);
    if (result)
    {
        printf("%s\n", result);
        free(result);
    }
    return 0;
}
*/
/*
void to_upper(unsigned int i, char *c)
{
	void (i);
    if ((*c >= 'a') && (*c <= 'z'))
    *c -= 32;
}
int main()
{
    char str[] = "hello, world!";
	ft_striteri(str, to_upper);
	printf("%s\n", str);
    return 0;
}
*/
/*
int main ()
{
	char *data = "magic text";
	ft_putstr_fd(data,1);

}
*/
/*
int main ()
{
	ft_putnbr_fd(-2147483648,1);
}
*/
/*
void	del(void *content)
{
	free(content);
	content = NULL;
}
void	ft_print(void *content)
{
		printf("|%s|\n",content);
}
void	*ft_upper(void *content)
{
	char *value;
	int i;
	int len;
	
	value = (char *)content;
	len = ft_strlen(value);
	i = 0;
	char *newvalue = malloc(sizeof(char)* (len + 1));
	if (!newvalue)
		return (NULL);
	while (i < len)
	{
		if(value[i]>= 'a' && value[i]<= 'z')
			newvalue[i] = value[i] - 32;
		else
			newvalue[i] = value[i];
		i++;
	}
	newvalue[i] = '\0';
	return (newvalue);	 
}

int main()
{
	t_list *head;
	t_list *member1;
	member1 = ft_lstnew(ft_strdup("adam"));
	head = member1;
	member1->next = NULL;


	t_list *member2;
	t_list *member3;
	
	member2 = ft_lstnew(ft_strdup("abdelali"));
	member3 = ft_lstnew(ft_strdup("youssef"));
	member1->next = member2;
	member2->next = member3;

	t_list *member0;
	member0 = ft_lstnew(ft_strdup("Mohamed"));
	ft_lstadd_front(&head, member0);
//size
	int i = ft_lstsize(head);
	printf("\nthere is %d node in this list\n\n",i);
	
//get the last node
	t_list *temp = ft_lstlast(head);
	printf("the last but not least is %s\n\n",temp->content);
	
//add at the end
	t_list *member4;
	member4 = ft_lstnew(ft_strdup("ayoub"));
	ft_lstadd_back(&head,member4);

//delete a node passing the node
//	ft_lstdelone(member3,del);
	
//delete node and it successor (litab3inha)
//	ft_lstclear(&member3,del);
//make memeber2 the new teal
//	member2->next = NULL;
	t_list *newlist;
	newlist = ft_lstmap(head,ft_upper,del);
	ft_lstiter(newlist,ft_print);
	// while (newlist)
	// {
	// 	printf("|%s|\n\n",head->content);
	// 	newlist = newlist->next;
	// }
}
*/