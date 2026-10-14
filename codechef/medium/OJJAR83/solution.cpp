                                                          <div className={styles.wrapper}>
                                                                <h1>Temperature Converter</h1>
                                                                      <div className={styles.display}>
                                                                              {/* Display the current temperature with the appropriate unit */}
                                                                                      <span>{temperature.toFixed(2)}°{unit}</span>
                                                                                            </div>
                                                      return (

                                                  }
                                                    };
                                              setUnit("C");
                              setUnit("F");
                                  } else {
                                        setTemperature(((temperature - 32) * 5) / 9);
                  if (unit === "C") {
                        setTemperature((temperature * 9) / 5 + 32);
              const convertTemperature = () => {
            // Function to convert temperature between Celsius and Fahrenheit

          const [unit, setUnit] = useState("C");
        // State to track the current unit (Celsius or Fahrenheit)
      
    const [temperature, setTemperature] = useState(defaultTemperature);
  // State to store the current temperature value
export function Temperature({defaultTemperature = 0}) {
import styles from "./App.module.css";

import { useState } from "react";