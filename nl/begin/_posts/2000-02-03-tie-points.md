---
title: "Hoe werkt de (STMB)? - Aansluitpunten"
style: two-col-page
lang: nl
contents:
- Aansluitpunten
---

## Aansluitpunten

![Tie Points of (STMB)](img/stemtera_inner_connection.svg){: .three-quarter-h-h .center}

In totaal zijn er 634 aansluitpunten op de (STMB), verdeeld in 3 hoofdgroepen.

De eerste groep is de spanningrijen. Er zijn 2 spanningrijen aan de linker en 2 aan de rechterzijde van de (STMB), in de diagram aangegeven met de oranje lijn. Iedere spanningsrij heeft 30 (1x30) aansluitpuntend die intern zijn verbonden in een recht lijn. Deze spanningrijen worden gebruikt om de spanning te verdelen en beschikbaar te maken over de gehele rij. 

De tweede groep zijn de standaard aansluitpunten. Deze worden gebruikt als verbindingspunten en zijn met groen gemarkeerd in het diagram. De samenstelling is dat iedere rij van 5 aansluitpunt onderling zijn verbonden, dus 1x5, bijvoorbeeld `1->ABCDE`{: .greenblock } is één groep van 1x5 aansluitpunten die onderling verbonden zijn. `1->FGHIJ`{: .greenblock } is een volgende groep van 1x5 aansluitpunten.
De laatste groep is de met zwart aangegeven 1x2 combinatie van aansluitpunten. Deze derde groep zijn verbonden met de pinnen van de micro-controllers binnenin de (STMB).

![(STMB) clip](img/stemtera_breadboard_clip.svg){: .quarter-h-h .left }In de aansluitpunten bevinden zich klemveren. Deze klemveren zijn gemaakt in combinaties van 1x2, 1x5 and 1x30. Als je een component in het aansluitpunt plaatst, bijvoorbeeld een weerstand, dan zal het pootje van de weerstand vastgehouden worden door de twee zijden van de klemveer waardoor er een mechanische verbinding onstaat, zoals aangegeven in het linker diagram. Omdat de klemveren van koper of roestvrijstaal zijn gemaakt kan er elektrische stroom lopen van de weerstand naar de klem. 

Door diverse elektronica componenten te combineren en te verbinden met de gewenste aansluitpunten kun je ingewikkelde elektronische circuits opbouwen. 
