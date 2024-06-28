import React, { useState, useEffect } from 'react';
import './App.css';

function App() {
  const [header, setHeader] = useState("ToDo List");
  const [todos, setTodos] = useState([]);
  const [isLoading, setIsLoading] = useState(false);
  const [searchTerm, setSearchTerm] = useState('');
  const [filteredTodos, setFilteredTodos] = useState([]);
  const [showSuccessMessage, setShowSuccessMessage] = useState(false);
  const [isLoggedIn, setIsLoggedIn] = useState(false);

  useEffect(() => {
    setIsLoading(true);
    fetch("https://jsonplaceholder.typicode.com/todos")
      .then(response => response.json())
      .then(json => {
        setTodos(json);
        setFilteredTodos(json);
        setIsLoading(false);
        setHeader("ToDo List");
        setShowSuccessMessage(true);
        setTimeout(() => setShowSuccessMessage(false), 3000);
      })
      .catch(error => {
        console.error(error);
        setIsLoading(false);
      });
  }, []);

  const handleInputChange = (event) => {
    const searchValue = event.target.value.toLowerCase();
    setSearchTerm(searchValue);
    const filtered = todos.filter(todo =>
      todo.title.toLowerCase().includes(searchValue)
    );
    setFilteredTodos(filtered);
  };

  const handleLogin = () => {
    setIsLoggedIn(true);
  };

  const handleLogout = () => {
    setIsLoggedIn(false);
  };

  return (
    <div className="App">
      <div className="login-box">
        {isLoggedIn ? (
          <button onClick={handleLogout}>Logout</button>
        ) : (
          <button onClick={handleLogin}>Login</button>
        )}
      </div>
      <h1>{header}</h1>
      {showSuccessMessage && (
        <div className="success-message">
          <span className="checkmark">✔</span> To-Do List Loaded Successfully
        </div>
      )}
      <input
        type="text"
        placeholder="Search To-Do Items..."
        value={searchTerm}
        onChange={handleInputChange}
        className="input-box"
      />
      {isLoading ? (
        <p>Loading todos...</p>
      ) : (
        <table className="centered-table">
          <thead>
            <tr>
              <th>ID</th>
              <th>Title</th>
              <th>Completed</th>
            </tr>
          </thead>
          <tbody>
            {filteredTodos.map((todo, index) => (
              <tr key={todo.id} className={index % 2 === 0 ? 'light-row' : 'dark-row'}>
                <td>{todo.id}</td>
                <td>{todo.title}</td>
                <td>
                  <label className="switch">
                    <input
                      type="checkbox"
                      checked={todo.completed}
                      onChange={() => {
                        // Handle checkbox change here if needed
                      }}
                    />
                    <span className="slider round"></span>
                  </label>
                </td>
              </tr>
            ))}
          </tbody>
        </table>
      )}
    </div>
  );
}

export default App;