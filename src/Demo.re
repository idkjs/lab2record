[@bs.module] external lab : Js.t({..}) = "./lab.json";

/* let lab = Node.Fs.readFileAsUtf8Sync("lab.json"); */
/* see Record Creation

   https://bucklescript.github.io/docs/en/interop-cheatsheet.html */
let components: Types.components = lab##components;

/* Js.log(components); */
Js.log("Hello, BuckleScript and Reason!");