async function handleSubmit(event) {
    event.preventDefault();
    
    const username = document.getElementById('username').value;
    const phone = document.getElementById('phone').value;
    
    const response = await fetch('https://script.google.com/macros/s/AKfycbyr9Tv3GpWJE3KZF3a3Pr82tjVvdun-MnkUvi6_o09qDUVbIyJlkejK9oIPFUiXnw_2/exec?type=NN&ID=<>&name=<>&by=webApp', {
        method: 'POST',
        headers: {
            'Content-Type': 'application/json',
        },
        body: JSON.stringify({ username, phone }),
    });
    
    const result = await response.json();
    
    if (result.result === 'success') {
        window.location.href = 'front.html';
    } else {
        alert('Failed to register. Please try again.');
    }
}