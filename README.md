<div id="top"></div>

<h1 align="center"> AP course HW  </h1>

<p align="center">
    <a alt="Version">
        <img src="https://img.shields.io/github/v/release/RabihND/AP2021-2022-Final?color=14adfa&logo=Semantic%20Web&logoColor=14adfa&style=for-the-badge" /></a>
    <a  alt="Downloads">
        <img src="https://img.shields.io/github/downloads/RabihND/AP2021-2022-Final/total?logo=App%20Store&logoColor=white&style=for-the-badge" /></a>
    <a href="https://github.com/RabihND/AP2021-2022-Final/graphs/contributors" alt="Contributers">
        <img src="https://img.shields.io/github/contributors/RabihND/AP2021-2022-Final?color=6fd671&logo=WhiteSource&style=for-the-badge" /></a>
    <a href="https://github.com/RabihND/AP2021-2022-Final//network/members" alt="Forks">
        <img src="https://img.shields.io/github/forks/RabihND/AP2021-2022-Final?color=cccccc&logo=Node-RED&style=for-the-badge" /></a>
    <a href=" https://github.com/RabihND/AP2021-2022-Final/stargazers">
        <img src="https://img.shields.io/github/stars/RabihND/AP2021-2022-Final?color=8e6be8&logo=Ethereum&logoColor=8e6be8&style=for-the-badge" alt="Stars" /></a>
    <a alt="Visitors">
        <img src="https://visitor-badge-reloaded.herokuapp.com/badge?page_id=RabihND/AP2021-2022-Final?color=14adfa&logo=Android&style=for-the-badge" /></a>
    <a href="https://github.com/RabihND/AP2021-2022-Final/master/LICENSE.txt">
        <img src="https://img.shields.io/github/license/RabihND/AP2021-2022-Final?color=%2363afdb&logo=letsencrypt&style=for-the-badge" alt="License"></a>
    
</p>

<!-- PROJECT LOGO -->
<br />
<div align="center">

  <h3 align="center"> Doubly-LinkedList📦</h3>
  <p align="center"><img src="./stuff/game.gif" width="110"></p>
  <p align="center">
   Doubly Linked List Data Structure In C++
    <br />
    <a href="https://github.com/RabihND/AP2021-2022-Final"><strong>Explore the documents »</strong></a>
    <br />
    <br />
  </p>
</div>


---

<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary> 
  <ol>
    <li><a href="#about-the-project">About The Project</a></li>
    <li><a href="#parts">Parts</a></li>
    <li><a href="#results">Results</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#refenences">Refenences</a></li>
    <li><a href="#contact">Contact</a></li>
    <li><a href="#roadmap">Roadmap</a></li>
  </ol>
</details>



<!-- ABOUT THE PROJECT -->
## About The Project
<p align="center"> <img  src="./stuff/linkedlist.png" width="1000"> </p>  
<p align="justify">In this homework you should implement linked-list data structure with c++.</p>

<p align="justify">Each node has two pointers, one pointing to the previous node and the other pointing to the next node.
Only the first node (head) has its previous node set to null and the last node (tail) has its next pointer set to null.</p>


<p align="right">(<a href="#top">back to top</a>)</p>


### Built With

Major frameworks/libraries used in this project:

* [C++](https://www.cplusplus.com/)


<p align="right">(<a href="#top">back to top</a>)</p>


<!-- PARTS -->
## Parts
**Class**

**1. Add a node at the front:**

<p align="center"> <img  src="./stuff/push_front.png" width="1000"> </p>  

<p align="justify">The new node,here, is always placed before the Linked List's head. The freshly inserted node is now the Double Linked List's new head. For instance, if the supplied Linked List is 1234 and item 5 is added to the front, the Linked List becomes 51234. The function that adds to the front of the list will be called <b>push_front()</b>. Because push must update the head pointer to refer to the new node, <b>push_front()</b> must receive a pointer to the head pointer.</p>

```C++
oid LinkedList::push_front(double data)
{
if (tail == nullptr) {
//Empty Case
tail = new Node(data);
} else {
//Non Empty Case
Node* Current = tail;
while (Current->previous != nullptr) { The beigining from the tail -> head
Current = Current->previous; (where cur.prev equal zero)
}
Node* Temp = new Node(data);
Temp->next = Current;
Temp->previous = nullptr;
Current->previous = Temp;
head = Temp;
}
};
```

**3. GameOverWindow Class** (GUI_Window)

The resulting window, which shows the player's loss(+) or victory(-).
- **display_text()**: Return a text with include the result of the game.(Win/Loss)

**4. Splash Screen Class** (GUI_Windows)
>{⌛} 



<p align="right">(<a href="#top">back to top</a>)</p>

<!-- RESULTS -->
## Results

**GUI OUTPUT:**
<details>
<summary>ScreenShoot Preview 🖼️</summary>
  <body>
    <p align="center"> <img src="./stuff/GUI_output.jpg" width="200"> </p>
  </body>
</details>

---

**TERMINAL OUTPUT:**
<details>
<summary>ScreenShoot Preview 🖼️</summary>
  <body>
    <p align="center"> <img src="./stuff/terminal_output.jpg" width="300"> </p>
  </body>
</details>

<p align="right">(<a href="#top">back to top</a>)</p>

<!-- LICENSE -->
## License

Distributed under the MIT License. See `LICENSE.txt` for more information.

<p align="right">(<a href="#top">back to top</a>)</p>

<!-- REFERENCES -->
## Refenences

🔎

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- CONTACT -->
## Contacts


Rabih ND - [@RabihND](https://github.com/RabihND) 

Hasan Sanei - [@hasansanei](https://github.com/hasansanei)

**Project Link:** [https://github.com/RabihND/AP2021-2022-Final](https://github.com/RabihND/AP2021-2022-Final)

<p align="right">(<a href="#top">back to top</a>)</p>


<!-- ROADMAP -->
## Roadmap

- [x] Write the main code-map.
- [x] Design the GUI window. 
- [x] Write the MasterMain Core Functions.
- [x] Design the GameOver window.
- [x] <a href="https://github.com/RabihND/AP2021-2022-Final/releases/latest"><strong>Build the .EXE Release</strong></a>
- [ ] Splash screen
- [ ] Build APK release.

<p align="right">(<a href="#top">back to top</a>)</p>


---
<div align="center">
<p>
<img src="./stuff/logo.png" width="110">
<p align="center"><b>
Amirkabir University  of Technology</b>

(Tehran Polytechnic)
</p>
</p>
</div>



