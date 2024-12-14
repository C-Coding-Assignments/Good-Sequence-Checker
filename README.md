<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>

<header>
  <h1>Good Sequence Checker 🔢</h1>
  <p>
    Emily considers a sequence of integers "good" if every number in the sequence satisfies one of these conditions:
  </p>
  <ul>
    <li>The number is between 0 (inclusive) and <code>n</code> (exclusive).</li>
    <li>The number is a perfect square of some integer less than <code>n</code>.</li>
  </ul>
  <p>
    This program checks if a given sequence of integers is a good sequence and prints <code>yes</code> or <code>no</code> accordingly.
  </p>
</header>

<hr>

<details>
  <summary>Table of Contents 📖</summary>
  <ul>
    <li><a href="#task">Task</a></li>
    <li><a href="#input-and-output">Input and Output</a></li>
    <li><a href="#examples">Examples</a></li>
    <li><a href="#requirements">Requirements</a></li>
    <li><a href="#usage">Usage</a></li>
  </ul>
</details>

<hr>

<section id="task">
  <h2>Task 🛠️</h2>
  <p>
    Write a program that checks if a sequence of integers is a good sequence based on the criteria provided. If the sequence is good, print <code>yes</code>. Otherwise, print <code>no</code>.
  </p>
</section>

<hr>

<section id="input-and-output">
  <h2>Input and Output 🖥️</h2>
  <h3>Input</h3>
  <ul>
    <li>An integer <code>n</code>, the size of the sequence.</li>
    <li>A sequence of <code>n</code> integers.</li>
  </ul>

  <h3>Output</h3>
  <ul>
    <li><code>yes</code>, if the sequence satisfies the conditions for being a good sequence.</li>
    <li><code>no</code>, otherwise.</li>
  </ul>
</section>

<hr>

<section id="examples">
  <h2>Examples 📋</h2>
  <h3>Example #1</h3>
  <div class="code-block">
    Enter the size of sequence: 8<br>
    Enter numbers: 1 2 5 9 3 6 5 7<br>
    Output: yes
  </div>

  <h3>Example #2</h3>
  <div class="code-block">
    Enter the size of sequence: 5<br>
    Enter numbers: 16 4 9 5 1<br>
    Output: no
  </div>

  <h3>Example #3</h3>
  <div class="code-block">
    Enter the size of sequence: 5<br>
    Enter numbers: 1 2 16 9 3<br>
    Output: yes
  </div>
</section>

<hr>

<section id="requirements">
  <h2>Requirements ✔️</h2>
  <ol>
    <li>
      The program must:
      <ul>
        <li>Use an array to store the sequence of integers.</li>
        <li>Verify that every integer in the sequence is either less than <code>n</code> or is a perfect square of an integer less than <code>n</code>.</li>
        <li>Output <code>yes</code> or <code>no</code> based on the conditions.</li>
      </ul>
    </li>
  </ol>
</section>

<hr>

<section id="usage">
  <h2>Usage 🚀</h2>
  <p><strong>1. Compile the Program:</strong></p>
  <div class="code-block">gcc -o good_sequence_checker good_sequence_checker.c</div>
  <p><strong>2. Run the Program:</strong></p>
  <div class="code-block">./good_sequence_checker</div>
  <p><strong>3. Input Required:</strong></p>
  <ul>
    <li>The size of the sequence <code>n</code>.</li>
    <li>A sequence of <code>n</code> integers.</li>
  </ul>
</section>

</body>
</html>
