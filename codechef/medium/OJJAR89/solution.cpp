
                                                                  const updateAge = () => {
                                                                      const newAge = Number(ageInput);
                                                                          if (!isNaN(newAge)) {
import React, { useState } from "react";
import "./App.css";

function ProfileUpdater() {
  const [user, setUser] = useState({
      name: "Alice",
          age: 25,
              address: {
                    city: "Delhi",
                          country: "India"
                              }
                                });

                                  // State for input fields
                                    const [nameInput, setNameInput] = useState("");
                                      const [ageInput, setAgeInput] = useState("");
                                        const [cityInput, setCityInput] = useState("");

                                          const updateName = () => {
                                              if (nameInput) {
                                                    setUser(prev => ({ ...prev, name: nameInput }));
                                                          setNameInput("");
                                                              }
                                                                };