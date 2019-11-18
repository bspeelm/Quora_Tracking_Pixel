<!-- DO NOT MODIFY -->
<!-- Quora Pixel Code (JS Helper) -->
pixelId = '';
  
!function(q,e,v,n,t,s){
  if(q.qp) return; n=q.qp=function(){
    n.qp?n.qp.apply(n,arguments):n.queue.push(arguments);
  }; 
  n.queue=[];
  t=document.createElement(e);t.async=!0;t.src=v; 
  s=document.getElementsByTagName(e)[0]; s.parentNode.insertBefore(t,s);
}

(window, 'script', 'https://a.quora.com/qevents.js');
qp('init', pixelId);
qp('track', 'ViewContent');
alert("Quora Running");

<!-- End of Quora Pixel Code -->
<script>qp('track','<Generic>');</script>
