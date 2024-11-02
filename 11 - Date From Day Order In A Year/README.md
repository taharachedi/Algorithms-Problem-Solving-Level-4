# 📆 Problem 11 :Date From Day Order In A Year

✨ Ce programme C++ réalise deux fonctions principales :
1. Calculer le nombre de jours écoulés depuis le début de l'année jusqu'à une date donnée.
2. Convertir un numéro de jour (ordre du jour dans l'année) en une date (jour, mois, année).

👤 Le programme interagit avec l'utilisateur pour obtenir le jour, le mois et l'année, effectue les calculs, et affiche les résultats de manière claire et structurée.

## 🛠️ Fonctionnalités
- 🗓️ **Ajustement pour l’année bissextile** : Prend en compte février avec 29 jours pour les années bissextiles, sinon 28 jours.
- 📅 **Calcul du nombre de jours** : Calcule le total de jours jusqu’à une date donnée.
- 🔄 **Conversion de date** : Convertit un numéro de jour de l'année en jour/mois/année.

## 📚 Fonctionnement
1. 👤 **Saisie de l’utilisateur** : Le programme demande le jour, le mois et l'année.
2. 🗓️ **Vérification de l’année bissextile** : Détermine si l'année saisie est bissextile.
3. 📅 **Calcul du nombre de jours** : Utilise `Num_Of_Days_From_The_Beginning_Of_The_Year` pour calculer le total de jours jusqu’à la date saisie.
4. 🔄 **Conversion de date** : Convertit le nombre total de jours en une date réelle grâce à `Get_Date_From_Day_Order_In_Year`.

## 🔧 Fonctions Utilisées
- 📅 **`Read_Day()`** : Demande et récupère le jour auprès de l’utilisateur.
- 📆 **`Read_Month()`** : Demande et récupère le mois auprès de l’utilisateur.
- 🗓️ **`Read_Year()`** : Demande et récupère l'année auprès de l’utilisateur.
- 📅 **`is_Leap_Year(short Year)`** : Vérifie si une année est bissextile.
- 📆 **`Num_Of_Days_In_Month(short Month, short Year)`** : Récupère le nombre de jours dans un mois, en tenant compte des années bissextiles.
- 📅 **`Num_Of_Days_From_The_Beginning_Of_The_Year(short Day, short Month, short Year)`** : Calcule le nombre total de jours de janvier jusqu’à une date donnée.
- 🔄 **`Get_Date_From_Day_Order_In_Year(short Days_Order_In_Year, short Year)`** : Convertit le numéro de jour de l'année en date réelle.

## ▶️ Execution Example

🎯 Si l'utilisateur saisit la date "15 avril 2023", voici un exemple de réponse :
```plaintext

Please Enter A Day: 15
Please Enter A Month: 4
Please Enter A Year: 2023

The Number Of Days From The Beginning Of The Year is : 105

Date For [105] is : 15/4/2023
