# Create a Reason Record from Json

## Questions

* Decoding with bs-json returns a reason record type.

## Demo.re Error

* Running Demo.re get output where list length is 71 but logging only shows two items. Why?:

```
length using list length:  71
[ { name: 'Image',
    type: 'img',
    props:
     { src: 'https://c8r.imgix.net/120f3501b903b57b3b5ec654/60.jpg',
       w: 1 },
    style:
     { display: '${props.inline? \'inline\': \'block\'}',
       maxWidth: '100%' },
    examples:
     [ '<Image mb={3} />',
       '<Image src=\'https://c8r.imgix.net/4edc08e4bc121c4ecadfca68/12.jpg?w=1920\' />',
       '<Image src=\'https://c8r.imgix.net/87be409330dcb961fa548cb6/7.jpg?w=1920\' />',
       '<Image src=\'https://c8r.imgix.net/2a32c3132c544295ba531c19/6.jpg?w=1920\' />',
       '<Image src=\'https://c8r.imgix.net/9828c73fa60db50a76e7146c/5.jpg?w=1920\' />',
       '<Image src=\'https://c8r.imgix.net/2466f8f593c33a7fed01944a/2.jpg?w=1920\' />',
       '<Image src=\'https://c8r.imgix.net/144e345e22a23dbb1c79444b/11.jpg?w=1920\' />',
       '<Image src=\'https://c8r.imgix.net/4edc08e4bc121c4ecadfca68/12.jpg?w=1920\' />',
       '<Image src=\'https://c8r.imgix.net/d0d9307256e31e890b8bf867/13.jpg?w=1920\' />',
       '<Image src=\'https://c8r.imgix.net/2621cd3d6e685b470e9b298e/14.jpg?w=1920\' />',
       '<Image src=\'https://c8r.imgix.net/c91d73af39fc0812cc14e621/15.jpg?w=1920\' />',
       '<Image src=\'https://c8r.imgix.net/11f9e385c3dc98b892c1f79f/16.jpg?w=1920\' />',
       '<Image src=\'https://c8r.imgix.net/2d22d6d08b89fb89ba41aed2/17.jpg?w=1920\' />',
       '<Image src=\'https://c8r.imgix.net/b97f1bd4082879190414455f/18.jpg?w=1920\' />',
       '<Image src=\'https://c8r.imgix.net/ed2e3510a8b21dd165b74efb/19.jpg?w=1920\' />' ],
    system: [],
    description: 'Block level image. Fills parent container. Can work in Cards or Panels.' },
  [ { name: 'NavLink',
      type: 'a',
      props: [Object],
      style: [Object],
      examples: [Array],
      system: [Array],
      keywords: [Array] },
    [ [Object], [Array] ] ] ]
```

## ComponentDecode.re

* What is the relationship between Json.Decode a Belt.list type. Getting this error ComponentDecode.re

```
  We've found a bug for you!
  /Users/prisc_000/code/BHYV/lab2record/src/ComponentDecode.re 68:15-30

  66 │   json |> Json.Decode.list(decodeComponent);
  67 │
  68 │ components |> decodeComponents |> Js.log;

  This has type:
    Js.Json.t => Lab2record.Types.components
  But somewhere wanted:
    Belt.List.t('a) => 'b

  The incompatible parts:
    Js.Json.t (defined as Js.Json.t)
    vs
    Belt.List.t('a) (defined as list('a))

ninja: build stopped: subcommand failed.
```
