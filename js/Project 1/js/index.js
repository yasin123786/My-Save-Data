// document.getElementById('heading').addEventListener('click', function(){
//   document.write('Hello You Click On My Heading')
// })
// let btn = document.getElementById('btn');
// btn.addEventListener('click', func1);
// function func1(e) {
//     document.write("Thanks", );
// }
//  let btn = document.getElementById('btn');
//  btn.addEventListener('click', func1);
//  function func1(e) {
//      ("Thanks")
// //  } 
//  document.querySelector('.container')
//  .addEventListener('mousemove', function(e){
//      console.log(e.offsetX, e.offsetY);
//      document.body.style.backgroundColor = `rgb(${e.offsetX}, ${e.offsetY},154)`;
//      console.log('you triggered mouse move event');
// })
// let divElem = document.createElement('div');
// let val = localStorage.getItem('text');
// let text;
// if (val==null){
//     text = document.createTextNode("this is my element. click to edit it");
// }
// else{
//     text = document.createTextNode(val);
// }
// divElem.appendChild(text);
// divElem.setAttribute('id', 'elem');
// divElem.setAttribute('class', 'elem');
// divElem.setAttribute('style', 'border:2px solid black; width: 154px; margin: 34px; padding:23px;');
// let container = document.querySelector('.container');
// let first = document.getElementById('myfirst');
// container.insertBefore(divElem, first);
// console.log(divElem, container, first);
// divElem.addEventListener('click', function () {
//     let noTextAreas = document.getElementsByClassName('textarea').length;
//     if(noTextAreas ==0){
//     let html = elem.innerHTML;
//     divElem.innerHTML =  `<textarea class="textarea form-control"  id="textarea" rows="3">${html}</textarea>`;
// }
// let textarea = document.getElementById('textarea');
// textarea.addEventListener('blur', function(){
//    elem.innerHTML = textarea.value;
// })
// });