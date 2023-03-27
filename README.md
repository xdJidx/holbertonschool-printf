# holbertonschool-printf
Je rencontre un petit problème !  
Quand j'utilise la variable `%d` dans un _printf :  
`_printf("%d", nomVariable);`  
Qui n'est pas encore créer, j'ai un message d'erreur que j'ai préalablement écrit.  

<br>

jusqu'ici tout va bien, mais si j'utilise `%` dans mon _printf :  
`_printf("100%");`  
Et que j'ai préalablement utilisé une variable qui n'est pas encore créer,
tout ce qui se passe ensuite, sera ignoré.  

<br>

Parcontre, si tout est fonctionnel, et que j'utilise `%` :  
`_Printf("Est-ce que le programme fonctionne à 100 ?");`  
Tout semble fonctionner
