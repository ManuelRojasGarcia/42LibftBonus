#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	t_list	*node1;
	t_list	*node2;
	int	size;
	t_list	*list;
	t_list	*node3;
	t_list	*last;
	char	contenido[5] = "manu";
	t_list	*node4;	

	node1 = ft_lstnew(contenido);
	if (!node1)
		return (0);
	printf("El primer nodo newlist contiene %s\n", (char *)node1->content);
	node2 = ft_lstnew("juan");
	if (!node2)
		return (0);
	ft_lstadd_front(&node1, node2);
	printf("intercambiamos el orden, contenido de node1: %s, node2 %s\n", (char *)node2->content, (char *)node2->next->content);
	node4 = ft_lstnew(ft_substr("pedro", 0, 5));
	ft_lstadd_back(&node2, node4);
	/*metemos a pedro al final*/
	node3 = ft_lstnew(ft_substr("luis", 0, 4));
	ft_lstadd_front(&node2, node3);
	list = node3;
	size = ft_lstsize(list);
	printf("En este punto, la lista de nodos creados es de: %i\n", size);
	last = ft_lstlast(node3);
	printf("para saber el ultimo nodo imprimo su contenido: %s\n", (char *)last->content);
	printf("contenido node1 %s, node2 %s, node3 %s, node4 %s, node 4p %p\n", (char *)node3->content, (char *)node3->next->content, (char *)node3->next->next->content, (char *)node3->next->next->next->content, node3->next->next->next->next);
	printf("contenido node1 %p, node2 %p, node3 %p, node4 %p\n", node3->next, node3->next->next, node3->next->next->next, node3->next->next->next->next);
	printf("contenido direccion head  %p\n", node3);
	printf("contenido direccion list/head  %p\n", list);
    size = ft_lstsize(list);
    printf("tamaño list = %i\n", size);
//	ft_lstdelone(node3, free);
	node3->next->next->next = NULL;
	size = ft_lstsize(node3);
    printf("Borramos 1 nodo, debe haber 3 y hay: %i\n", size);
	printf("contenido node1 %s, node2 %s, node3 %s, node 3p %p\n", (char *)node3->content, (char *)node3->next->content, (char *)node3->next->next->content, node3->next->next->next);
	printf("contenido node1 %p, node2 %p, node3 %p\n", node3->next, node3->next->next, node3->next->next->next);
	printf("contenido direccion head  %p\n", node3);
	printf("contenido direccion list/head  %p\n", list);
	ft_lstclear(&node3, free);
 //   size = ft_lstsize(node3);
  //  printf("Borro todos los nodos, la lista de nodos creados es de: %i\n", size);
	

	return (0);
	
	
}
