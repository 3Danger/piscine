/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   c00.h                                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/05 19:50:11 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/05 20:04:51 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef C03_H
#define C03_H

int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char		*ft_strcat(char *dest, char *src);
char		*ft_strncat(char *dest, char *src, unsigned int nb);
char		*ft_strstr(char *str, char *to_find);
char		*ft_strlcat(char *dest, char *src, unsigned int size);

#endif
