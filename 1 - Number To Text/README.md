# 🔢 Problem: Number to Text Converter

## 📝 Description
Ce programme C++ convertit un nombre entier saisi par l'utilisateur en son équivalent en toutes lettres (texte). Par exemple, un nombre comme `1234` sera transformé en "One Thousand Two Hundred Thirty-Four". Il gère les nombres jusqu'à des milliards.

Le programme inclut les fonctionnalités suivantes :
- 🔹 `Read_Number` : Demande à l'utilisateur d'entrer un nombre et le retourne.
- 🔹 `Number_To_Text` : Convertit le nombre en texte, prenant en charge différents niveaux (unités, dizaines, centaines, milliers, millions, et milliards).

## 💡 Explication du Code

- **📥 Fonction `Read_Number`** : 
  - Cette fonction invite l'utilisateur à entrer un nombre. Elle utilise `cin` pour capturer l'entrée et retourne le nombre saisi sous forme de `long long int` pour gérer de grandes valeurs.
  - 🖥️ Affiche le message : "Please Enter A Number Mr.Taha : "

- **🔠 Fonction `Number_To_Text`** :
  - Cette fonction utilise plusieurs conditions pour transformer un nombre entier en texte. Elle contient des tableaux de chaînes pour les unités et les dizaines spéciales.
  
  - **🧮 Cas 0 - 19** : Gère les nombres de zéro à dix-neuf en utilisant un tableau (`Arr[]`) qui mappe directement les nombres à leur version en texte. Si le nombre est dans cette plage, il retourne simplement la chaîne correspondante.
  
  - **🧮 Cas 20 - 99** : Gère les nombres de vingt à quatre-vingt-dix-neuf. Divise le nombre pour obtenir les dizaines, puis appelle `Number_To_Text` de manière récursive pour ajouter les unités restantes (si elles existent).

  - **🧮 Cas 100 - 999** : Gère les centaines. Divise le nombre pour obtenir la centaine, puis appelle de manière récursive `Number_To_Text` pour les dizaines et unités.

  - **🧮 Cas 1,000 - 999,999** : Gère les milliers en divisant par 1 000. Appelle `Number_To_Text` pour les centaines restantes.

  - **🧮 Cas 1,000,000 - 999,999,999** : Gère les millions. Divise le nombre par 1 000 000 et appelle `Number_To_Text` pour le reste.

  - **🧮 Cas 1,000,000,000 et plus** : Gère les milliards et plus en divisant par 1 000 000 000 et utilise une récursion pour obtenir la partie restante.

- **🖥️ Fonction `main`** :
  - Change la couleur de la console en utilisant `system("color f3")` pour améliorer la lisibilité.
  - Appelle `Read_Number` pour capturer le nombre.
  - Affiche le résultat de la conversion en appelant `Number_To_Text`.
  - Utilise `system("pause>0")` pour maintenir la console ouverte après l'affichage.

## ▶️ Exemple d'exécution :
Lorsque vous entrez `1234`, le programme affiche : 
```plaintext
One Thousand Two Hundred Thirty-Four
