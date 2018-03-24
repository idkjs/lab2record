[@bs.module] external lab : Js.t({..}) = "./lab.json";

let x = lab##components;

let x2 = Belt.List.fromArray(x);

/* Js.log2("length using array length: ", Belt.Array.length(x)); */
Js.log2("length using list length: ", Belt.List.length(x2));

Js.log(x2);