# OJJAR47

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Sum Total Amount Spent

You are given an array of strings, where each string is a word. Your task is to find and return the longest word in the array. If there are multiple words with the same maximum length, return the one that appears first. Use the `reduce()` method to solve this problem.

## Solution

**Language:** JavaScript  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-07T06:42:21.329Z  

```js
const words = ["apple", "banana", "cherry", "watermelon", "kiwi"];

// complete the code 



const longestWord = words.reduce((longest,current)=> current.length > longest.length? current : longest, "");
console.log(longestWord)
```

---

[View on CodeChef](https://www.codechef.com/problems/OJJAR47)