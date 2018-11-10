import loadWebAssembly from './loader';
import jsFib from './fib';

const FIB_NUM = 40;

function cFibTime() {
	loadWebAssembly('fib.wasm').then((instance) => {
		const fib = instance.exports._fib;
		const startTime = Date.now();
		fib(FIB_NUM);
		const endTime = Date.now();
		const elCFib = document.querySelector('#cFib');
		elCFib.innerHTML = `c fib 运行时长:  ${endTime - startTime}`;
	});
}

function jsFibTime() {
	const startTime = Date.now();
	jsFib(FIB_NUM);
	const endTime = Date.now();
	const leJsFib = document.querySelector('#jsFib');
	leJsFib.innerHTML = `js fib 运行时长:  ${endTime - startTime}`;
}

function init() {
	cFibTime();
	jsFibTime();
}

init();
