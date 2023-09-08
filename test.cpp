/*
! tailwindcss v3.2.4 | MIT License | https://tailwindcss.com
*/
/*
1. Prevent padding and border from affecting element width. (https://github.com/mozdevs/cssremedy/issues/4)
2. Allow adding a border to an element by just adding a border-width. (https://github.com/tailwindcss/tailwindcss/pull/116)
*/

*,
::before,
::after {
  box-sizing: border-box;
  /* 1 */
  border-width: 0;
  /* 2 */
  border-style: solid;
  /* 2 */
  border-color: currentColor;
  /* 2 */
}

::before,
::after {
  --tw-content: '';
}

/*
1. Use a consistent sensible line-height in all browsers.
2. Prevent adjustments of font size after orientation changes in iOS.
3. Use a more readable tab size.
4. Use the user's configured `sans` font-family by default.
5. Use the user's configured `sans` font-feature-settings by default.
*/

html {
  line-height: 1.5;
  /* 1 */
  -webkit-text-size-adjust: 100%;
  /* 2 */
  -moz-tab-size: 4;
  /* 3 */
  -o-tab-size: 4;
  tab-size: 4;
  /* 3 */
  font-family: Noto Sans KR, ui-sans-serif, system-ui, -apple-system, BlinkMacSystemFont, "Segoe UI", Roboto, "Helvetica Neue", Arial, "Noto Sans", sans-serif, "Apple Color Emoji", "Segoe UI Emoji", "Segoe UI Symbol", "Noto Color Emoji";
  /* 4 */
  font-feature-settings: normal;
  /* 5 */
}

/*
1. Remove the margin in all browsers.
2. Inherit line-height from `html` so users can set them as a class directly on the `html` element.
*/

body {
  margin: 0;
  /* 1 */
  line-height: inherit;
  /* 2 */
}

/*
1. Add the correct height in Firefox.
2. Correct the inheritance of border color in Firefox. (https://bugzilla.mozilla.org/show_bug.cgi?id=190655)
3. Ensure horizontal rules are visible by default.
*/

hr {
  height: 0;
  /* 1 */
  color: inherit;
  /* 2 */
  border-top-width: 1px;
  /* 3 */
}

/*
Add the correct text decoration in Chrome, Edge, and Safari.
*/

abbr:where([title]) {
  -webkit-text-decoration: underline dotted;
  text-decoration: underline dotted;
}

/*
Remove the default font size and weight for headings.
*/

h1,
h2,
h3,
h4,
h5,
h6 {
  font-size: inherit;
  font-weight: inherit;
}

/*
Reset links to optimize for opt-in styling instead of opt-out.
*/

a {
  color: inherit;
  text-decoration: inherit;
}

/*
Add the correct font weight in Edge and Safari.
*/

b,
strong {
  font-weight: bolder;
}

/*
1. Use the user's configured `mono` font family by default.
2. Correct the odd `em` font sizing in all browsers.
*/

code,
kbd,
samp,
pre {
  font-family: D2Coding, ui-monospace, SFMono-Regular, Menlo, Monaco, Consolas, "Liberation Mono", "Courier New", monospace;
  /* 1 */
  font-size: 1em;
  /* 2 */
}

/*
Add the correct font size in all browsers.
*/

small {
  font-size: 80%;
}

/*
Prevent `sub` and `sup` elements from affecting the line height in all browsers.
*/

sub,
sup {
  font-size: 75%;
  line-height: 0;
  position: relative;
  vertical-align: baseline;
}

sub {
  bottom: -0.25em;
}

sup {
  top: -0.5em;
}

/*
1. Remove text indentation from table contents in Chrome and Safari. (https://bugs.chromium.org/p/chromium/issues/detail?id=999088, https://bugs.webkit.org/show_bug.cgi?id=201297)
2. Correct table border color inheritance in all Chrome and Safari. (https://bugs.chromium.org/p/chromium/issues/detail?id=935729, https://bugs.webkit.org/show_bug.cgi?id=195016)
3. Remove gaps between table borders by default.
*/

table {
  text-indent: 0;
  /* 1 */
  border-color: inherit;
  /* 2 */
  border-collapse: collapse;
  /* 3 */
}

/*
1. Change the font styles in all browsers.
2. Remove the margin in Firefox and Safari.
3. Remove default padding in all browsers.
*/

button,
input,
optgroup,
select,
textarea {
  font-family: inherit;
  /* 1 */
  font-size: 100%;
  /* 1 */
  font-weight: inherit;
  /* 1 */
  line-height: inherit;
  /* 1 */
  color: inherit;
  /* 1 */
  margin: 0;
  /* 2 */
  padding: 0;
  /* 3 */
}

/*
Remove the inheritance of text transform in Edge and Firefox.
*/

button,
select {
  text-transform: none;
}

/*
1. Correct the inability to style clickable types in iOS and Safari.
2. Remove default button styles.
*/

button,
[type='button'],
[type='reset'],
[type='submit'] {
  -webkit-appearance: button;
  /* 1 */
  background-color: transparent;
  /* 2 */
  background-image: none;
  /* 2 */
}

/*
Use the modern Firefox focus style for all focusable elements.
*/

:-moz-focusring {
  outline: auto;
}

/*
Remove the additional `:invalid` styles in Firefox. (https://github.com/mozilla/gecko-dev/blob/2f9eacd9d3d995c937b4251a5557d95d494c9be1/layout/style/res/forms.css#L728-L737)
*/

:-moz-ui-invalid {
  box-shadow: none;
}

/*
Add the correct vertical alignment in Chrome and Firefox.
*/

progress {
  vertical-align: baseline;
}

/*
Correct the cursor style of increment and decrement buttons in Safari.
*/

::-webkit-inner-spin-button,
::-webkit-outer-spin-button {
  height: auto;
}

/*
1. Correct the odd appearance in Chrome and Safari.
2. Correct the outline style in Safari.
*/

[type='search'] {
  -webkit-appearance: textfield;
  /* 1 */
  outline-offset: -2px;
  /* 2 */
}

/*
Remove the inner padding in Chrome and Safari on macOS.
*/

::-webkit-search-decoration {
  -webkit-appearance: none;
}

/*
1. Correct the inability to style clickable types in iOS and Safari.
2. Change font properties to `inherit` in Safari.
*/

::-webkit-file-upload-button {
  -webkit-appearance: button;
  /* 1 */
  font: inherit;
  /* 2 */
}

/*
Add the correct display in Chrome and Safari.
*/

summary {
  display: list-item;
}

/*
Removes the default spacing and border for appropriate elements.
*/

blockquote,
dl,
dd,
h1,
h2,
h3,
h4,
h5,
h6,
hr,
figure,
p,
pre {
  margin: 0;
}

fieldset {
  margin: 0;
  padding: 0;
}

legend {
  padding: 0;
}

ol,
ul,
menu {
  list-style: none;
  margin: 0;
  padding: 0;
}

/*
Prevent resizing textareas horizontally by default.
*/

textarea {
  resize: vertical;
}

/*
1. Reset the default placeholder opacity in Firefox. (https://github.com/tailwindlabs/tailwindcss/issues/3300)
2. Set the default placeholder color to the user's configured gray 400 color.
*/

input::-moz-placeholder,
textarea::-moz-placeholder {
  opacity: 1;
  /* 1 */
  color: #9ca3af;
  /* 2 */
}

input::placeholder,
textarea::placeholder {
  opacity: 1;
  /* 1 */
  color: #9ca3af;
  /* 2 */
}

/*
Set the default cursor for buttons.
*/

button,
[role="button"] {
  cursor: pointer;
}

/*
Make sure disabled buttons don't get the pointer cursor.
*/
:disabled {
  cursor: default;
}

/*
1. Make replaced elements `display: block` by default. (https://github.com/mozdevs/cssremedy/issues/14)
2. Add `vertical-align: middle` to align replaced elements more sensibly by default. (https://github.com/jensimmons/cssremedy/issues/14#issuecomment-634934210)
   This can trigger a poorly considered lint error in some tools but is included by design.
*/

img,
svg,
video,
canvas,
audio,
iframe,
embed,
object {
  display: block;
  /* 1 */
  vertical-align: middle;
  /* 2 */
}

/*
Constrain images and videos to the parent width and preserve their intrinsic aspect ratio. (https://github.com/mozdevs/cssremedy/issues/14)
*/

img,
video {
  max-width: 100%;
  height: auto;
}

/* Make elements with the HTML hidden attribute stay hidden by default */
[hidden] {
  display: none;
}

*,
::before,
::after {
  --tw-border-spacing-x: 0;
  --tw-border-spacing-y: 0;
  --tw-translate-x: 0;
  --tw-translate-y: 0;
  --tw-rotate: 0;
  --tw-skew-x: 0;
  --tw-skew-y: 0;
  --tw-scale-x: 1;
  --tw-scale-y: 1;
  --tw-pan-x: ;
  --tw-pan-y: ;
  --tw-pinch-zoom: ;
  --tw-scroll-snap-strictness: proximity;
  --tw-ordinal: ;
  --tw-slashed-zero: ;
  --tw-numeric-figure: ;
  --tw-numeric-spacing: ;
  --tw-numeric-fraction: ;
  --tw-ring-inset: ;
  --tw-ring-offset-width: 0px;
  --tw-ring-offset-color: #fff;
  --tw-ring-color: rgb(59 130 246 / 0.5);
  --tw-ring-offset-shadow: 0 0 #0000;
  --tw-ring-shadow: 0 0 #0000;
  --tw-shadow: 0 0 #0000;
  --tw-shadow-colored: 0 0 #0000;
  --tw-blur: ;
  --tw-brightness: ;
  --tw-contrast: ;
  --tw-grayscale: ;
  --tw-hue-rotate: ;
  --tw-invert: ;
  --tw-saturate: ;
  --tw-sepia: ;
  --tw-drop-shadow: ;
  --tw-backdrop-blur: ;
  --tw-backdrop-brightness: ;
  --tw-backdrop-contrast: ;
  --tw-backdrop-grayscale: ;
  --tw-backdrop-hue-rotate: ;
  --tw-backdrop-invert: ;
  --tw-backdrop-opacity: ;
  --tw-backdrop-saturate: ;
  --tw-backdrop-sepia: ;
}

::backdrop {
  --tw-border-spacing-x: 0;
  --tw-border-spacing-y: 0;
  --tw-translate-x: 0;
  --tw-translate-y: 0;
  --tw-rotate: 0;
  --tw-skew-x: 0;
  --tw-skew-y: 0;
  --tw-scale-x: 1;
  --tw-scale-y: 1;
  --tw-pan-x: ;
  --tw-pan-y: ;
  --tw-pinch-zoom: ;
  --tw-scroll-snap-strictness: proximity;
  --tw-ordinal: ;
  --tw-slashed-zero: ;
  --tw-numeric-figure: ;
  --tw-numeric-spacing: ;
  --tw-numeric-fraction: ;
  --tw-ring-inset: ;
  --tw-ring-offset-width: 0px;
  --tw-ring-offset-color: #fff;
  --tw-ring-color: rgb(59 130 246 / 0.5);
  --tw-ring-offset-shadow: 0 0 #0000;
  --tw-ring-shadow: 0 0 #0000;
  --tw-shadow: 0 0 #0000;
  --tw-shadow-colored: 0 0 #0000;
  --tw-blur: ;
  --tw-brightness: ;
  --tw-contrast: ;
  --tw-grayscale: ;
  --tw-hue-rotate: ;
  --tw-invert: ;
  --tw-saturate: ;
  --tw-sepia: ;
  --tw-drop-shadow: ;
  --tw-backdrop-blur: ;
  --tw-backdrop-brightness: ;
  --tw-backdrop-contrast: ;
  --tw-backdrop-grayscale: ;
  --tw-backdrop-hue-rotate: ;
  --tw-backdrop-invert: ;
  --tw-backdrop-opacity: ;
  --tw-backdrop-saturate: ;
  --tw-backdrop-sepia: ;
}

.fixed {
  position: fixed;
}

.absolute {
  position: absolute;
}

.relative {
  position: relative;
}

.bottom-3 {
  bottom: 0.75rem;
}

.top-0 {
  top: 0px;
}

.left-0 {
  left: 0px;
}

.-left-\[calc\(theme\(width\.s\)\)\] {
  left: calc(calc(16rem) * -1);
}

.right-0 {
  right: 0px;
}

.top-\[calc\(theme\(spacing\.14\)\+theme\(spacing\.1\)\)\] {
  top: calc(3.5rem + 0.25rem);
}

.top-\[calc\(100\%\+theme\(spacing\.6\)\)\] {
  top: calc(100% + 1.5rem);
}

.left-\[calc\(100\%\/2\)\] {
  left: calc(100% / 2);
}

.-top-\[1px\] {
  top: -1px;
}

.top-4 {
  top: 1rem;
}

.top-20 {
  top: 5rem;
}

.top-2 {
  top: 0.5rem;
}

.right-4 {
  right: 1rem;
}

.z-30 {
  z-index: 30;
}

.z-50 {
  z-index: 50;
}

.z-40 {
  z-index: 40;
}

.z-20 {
  z-index: 20;
}

.z-0 {
  z-index: 0;
}

.z-10 {
  z-index: 10;
}

.-z-\[1\] {
  z-index: -1;
}

.m-0 {
  margin: 0px;
}

.my-14 {
  margin-top: 3.5rem;
  margin-bottom: 3.5rem;
}

.mx-auto {
  margin-left: auto;
  margin-right: auto;
}

.my-10 {
  margin-top: 2.5rem;
  margin-bottom: 2.5rem;
}

.mx-4 {
  margin-left: 1rem;
  margin-right: 1rem;
}

.mx-1 {
  margin-left: 0.25rem;
  margin-right: 0.25rem;
}

.my-4 {
  margin-top: 1rem;
  margin-bottom: 1rem;
}

.my-5 {
  margin-top: 1.25rem;
  margin-bottom: 1.25rem;
}

.my-0 {
  margin-top: 0px;
  margin-bottom: 0px;
}

.mb-4 {
  margin-bottom: 1rem;
}

.mt-20 {
  margin-top: 5rem;
}

.mb-10 {
  margin-bottom: 2.5rem;
}

.mt-3 {
  margin-top: 0.75rem;
}

.mt-2 {
  margin-top: 0.5rem;
}

.mt-4 {
  margin-top: 1rem;
}

.mt-8 {
  margin-top: 2rem;
}

.mb-6 {
  margin-bottom: 1.5rem;
}

.mr-1 {
  margin-right: 0.25rem;
}

.mr-2 {
  margin-right: 0.5rem;
}

.mt-1 {
  margin-top: 0.25rem;
}

.ml-3 {
  margin-left: 0.75rem;
}

.mr-auto {
  margin-right: auto;
}

.mt-9 {
  margin-top: 2.25rem;
}

.mr-1\.5 {
  margin-right: 0.375rem;
}

.ml-2 {
  margin-left: 0.5rem;
}

.mb-8 {
  margin-bottom: 2rem;
}

.mt-6 {
  margin-top: 1.5rem;
}

.mb-0 {
  margin-bottom: 0px;
}

.box-border {
  box-sizing: border-box;
}

.block {
  display: block;
}

.inline-block {
  display: inline-block;
}

.flex {
  display: flex;
}

.table {
  display: table;
}

.grid {
  display: grid;
}

.hidden {
  display: none;
}

.h-10 {
  height: 2.5rem;
}

.h-screen {
  height: 100vh;
}

.h-14 {
  height: 3.5rem;
}

.h-0\.5 {
  height: 0.125rem;
}

.h-0 {
  height: 0px;
}

.h-full {
  height: 100%;
}

.h-9 {
  height: 2.25rem;
}

.h-5 {
  height: 1.25rem;
}

.h-64 {
  height: 16rem;
}

.h-12 {
  height: 3rem;
}

.h-8 {
  height: 2rem;
}

.h-11 {
  height: 2.75rem;
}

.h-32 {
  height: 8rem;
}

.h-auto {
  height: auto;
}

.h-20 {
  height: 5rem;
}

.max-h-full {
  max-height: 100%;
}

.max-h-\[calc\(100vh-theme\(spacing\.20\)-theme\(spacing\.10\)-theme\(spacing\.3\)-2rem\)\] {
  max-height: calc(100vh - 5rem - 2.5rem - 0.75rem - 2rem);
}

.max-h-\[inherit\] {
  max-height: inherit;
}

.min-h-0 {
  min-height: 0px;
}

.w-full {
  width: 100%;
}

.w-10 {
  width: 2.5rem;
}

.w-screen {
  width: 100vw;
}

.w-14 {
  width: 3.5rem;
}

.w-0 {
  width: 0px;
}

.w-s {
  width: 16rem;
}

.w-\[calc\(theme\(width\.s\)\+theme\(spacing\.8\)\)\] {
  width: calc(16rem + 2rem);
}

.w-64 {
  width: 16rem;
}

.w-9 {
  width: 2.25rem;
}

.w-0\.5 {
  width: 0.125rem;
}

.w-8 {
  width: 2rem;
}

.w-16 {
  width: 4rem;
}

.w-48 {
  width: 12rem;
}

.w-\[calc\(100\%\+theme\(spacing\.10\)\)\] {
  width: calc(100% + 2.5rem);
}

.w-auto {
  width: auto;
}

.w-56 {
  width: 14rem;
}

.w-\[calc\(theme\(spacing\.56\)\+theme\(spacing\.5\)\)\] {
  width: calc(14rem + 1.25rem);
}

.w-20 {
  width: 5rem;
}

.max-w-\[calc\(80vw-152px\)\] {
  max-width: calc(80vw - 152px);
}

.max-w-none {
  max-width: none;
}

.max-w-full {
  max-width: 100%;
}

.rotate-90 {
  --tw-rotate: 90deg;
  transform: translate(var(--tw-translate-x), var(--tw-translate-y)) rotate(var(--tw-rotate)) skewX(var(--tw-skew-x)) skewY(var(--tw-skew-y)) scaleX(var(--tw-scale-x)) scaleY(var(--tw-scale-y));
}

.scale-75 {
  --tw-scale-x: .75;
  --tw-scale-y: .75;
  transform: translate(var(--tw-translate-x), var(--tw-translate-y)) rotate(var(--tw-rotate)) skewX(var(--tw-skew-x)) skewY(var(--tw-skew-y)) scaleX(var(--tw-scale-x)) scaleY(var(--tw-scale-y));
}

@keyframes loading {

  0% {
    transform: rotate(0deg);
  }

  100% {
    transform: rotate(360deg);
  }
}

.animate-loading {
  animation: loading 1s linear infinite;
}

.cursor-pointer {
  cursor: pointer;
}

.resize-none {
  resize: none;
}

.list-inside {
  list-style-position: inside;
}

.grid-cols-1 {
  grid-template-columns: repeat(1, minmax(0, 1fr));
}

.flex-col {
  flex-direction: column;
}

.flex-col-reverse {
  flex-direction: column-reverse;
}

.flex-wrap {
  flex-wrap: wrap;
}

.items-end {
  align-items: flex-end;
}

.items-center {
  align-items: center;
}

.justify-end {
  justify-content: flex-end;
}

.justify-center {
  justify-content: center;
}

.justify-between {
  justify-content: space-between;
}

.gap-6 {
  gap: 1.5rem;
}

.gap-4 {
  gap: 1rem;
}

.gap-x-3 {
  -moz-column-gap: 0.75rem;
  column-gap: 0.75rem;
}

.gap-y-6 {
  row-gap: 1.5rem;
}

.gap-y-10 {
  row-gap: 2.5rem;
}

.gap-y-2 {
  row-gap: 0.5rem;
}

.gap-y-4 {
  row-gap: 1rem;
}

.gap-y-24 {
  row-gap: 6rem;
}

.gap-x-2 {
  -moz-column-gap: 0.5rem;
  column-gap: 0.5rem;
}

.gap-y-3 {
  row-gap: 0.75rem;
}

.gap-x-4 {
  -moz-column-gap: 1rem;
  column-gap: 1rem;
}

.gap-x-1 {
  -moz-column-gap: 0.25rem;
  column-gap: 0.25rem;
}

.gap-y-5 {
  row-gap: 1.25rem;
}

.gap-y-1 {
  row-gap: 0.25rem;
}

.gap-x-5 {
  -moz-column-gap: 1.25rem;
  column-gap: 1.25rem;
}

.gap-x-1\.5 {
  -moz-column-gap: 0.375rem;
  column-gap: 0.375rem;
}

.overflow-hidden {
  overflow: hidden;
}

.overflow-x-hidden {
  overflow-x: hidden;
}

.overflow-y-scroll {
  overflow-y: scroll;
}

.scroll-smooth {
  scroll-behavior: smooth;
}

.whitespace-normal {
  white-space: normal;
}

.break-all {
  word-break: break-all;
}

.rounded-full {
  border-radius: 9999px;
}

.rounded {
  border-radius: 0.25rem;
}

.rounded-md {
  border-radius: 0.375rem;
}

.rounded-lg {
  border-radius: 0.5rem;
}

.rounded-xl {
  border-radius: 0.75rem;
}

.rounded-l-xl {
  border-top-left-radius: 0.75rem;
  border-bottom-left-radius: 0.75rem;
}

.border-2 {
  border-width: 2px;
}

.border-0 {
  border-width: 0px;
}

.border-b {
  border-bottom-width: 1px;
}

.border-r-0 {
  border-right-width: 0px;
}

.border-l-2 {
  border-left-width: 2px;
}

.border-t {
  border-top-width: 1px;
}

.border-solid {
  border-style: solid;
}

.border-dashed {
  border-style: dashed;
}

.border-dotted {
  border-style: dotted;
}

.border-none {
  border-style: none;
}

.border-h-500\/20 {
  border-color: rgb(102 102 110 / 0.2);
}

.border-h-400 {
  --tw-border-opacity: 1;
  border-color: rgb(153 153 161 / var(--tw-border-opacity));
}

.border-h-300 {
  --tw-border-opacity: 1;
  border-color: rgb(230 230 233 / var(--tw-border-opacity));
}

.border-l-h-500 {
  --tw-border-opacity: 1;
  border-left-color: rgb(102 102 110 / var(--tw-border-opacity));
}

.border-b-h-200 {
  --tw-border-opacity: 1;
  border-bottom-color: rgb(244 244 246 / var(--tw-border-opacity));
}

.bg-h-100 {
  --tw-bg-opacity: 1;
  background-color: rgb(255 255 255 / var(--tw-bg-opacity));
}

.bg-h-200 {
  --tw-bg-opacity: 1;
  background-color: rgb(244 244 246 / var(--tw-bg-opacity));
}

.bg-h-900 {
  --tw-bg-opacity: 1;
  background-color: rgb(0 0 0 / var(--tw-bg-opacity));
}

.bg-h-800 {
  --tw-bg-opacity: 1;
  background-color: rgb(30 31 33 / var(--tw-bg-opacity));
}

.bg-h-900\/50 {
  background-color: rgb(0 0 0 / 0.5);
}

.bg-h-100\/50 {
  background-color: rgb(255 255 255 / 0.5);
}

.bg-h-300 {
  --tw-bg-opacity: 1;
  background-color: rgb(230 230 233 / var(--tw-bg-opacity));
}

.bg-h-600 {
  --tw-bg-opacity: 1;
  background-color: rgb(53 54 56 / var(--tw-bg-opacity));
}

.bg-h-700 {
  --tw-bg-opacity: 1;
  background-color: rgb(41 42 45 / var(--tw-bg-opacity));
}

.bg-transparent {
  background-color: transparent;
}

.object-cover {
  -o-object-fit: cover;
  object-fit: cover;
}

.p-0 {
  padding: 0px;
}

.p-10 {
  padding: 2.5rem;
}

.p-5 {
  padding: 1.25rem;
}

.px-4 {
  padding-left: 1rem;
  padding-right: 1rem;
}

.py-6 {
  padding-top: 1.5rem;
  padding-bottom: 1.5rem;
}

.py-5 {
  padding-top: 1.25rem;
  padding-bottom: 1.25rem;
}

.py-3 {
  padding-top: 0.75rem;
  padding-bottom: 0.75rem;
}

.py-20 {
  padding-top: 5rem;
  padding-bottom: 5rem;
}

.px-3 {
  padding-left: 0.75rem;
  padding-right: 0.75rem;
}

.px-2 {
  padding-left: 0.5rem;
  padding-right: 0.5rem;
}

.py-0\.5 {
  padding-top: 0.125rem;
  padding-bottom: 0.125rem;
}

.py-0 {
  padding-top: 0px;
  padding-bottom: 0px;
}

.py-4 {
  padding-top: 1rem;
  padding-bottom: 1rem;
}

.py-1 {
  padding-top: 0.25rem;
  padding-bottom: 0.25rem;
}

.py-8 {
  padding-top: 2rem;
  padding-bottom: 2rem;
}

.py-2 {
  padding-top: 0.5rem;
  padding-bottom: 0.5rem;
}

.pl-0 {
  padding-left: 0px;
}

.pb-14 {
  padding-bottom: 3.5rem;
}

.pt-4 {
  padding-top: 1rem;
}

.pb-1 {
  padding-bottom: 0.25rem;
}

.pr-5 {
  padding-right: 1.25rem;
}

.pl-16 {
  padding-left: 4rem;
}

.pb-5 {
  padding-bottom: 1.25rem;
}

.pt-7 {
  padding-top: 1.75rem;
}

.pl-3 {
  padding-left: 0.75rem;
}

.pr-1 {
  padding-right: 0.25rem;
}

.pt-9 {
  padding-top: 2.25rem;
}

.pl-4 {
  padding-left: 1rem;
}

.pb-2 {
  padding-bottom: 0.5rem;
}

.text-left {
  text-align: left;
}

.text-center {
  text-align: center;
}

.text-right {
  text-align: right;
}

.font-sans {
  font-family: Noto Sans KR, ui-sans-serif, system-ui, -apple-system, BlinkMacSystemFont, "Segoe UI", Roboto, "Helvetica Neue", Arial, "Noto Sans", sans-serif, "Apple Color Emoji", "Segoe UI Emoji", "Segoe UI Symbol", "Noto Color Emoji";
}

.font-\[initial\] {
  font-family: initial;
}

.text-sm {
  font-size: 0.875rem;
  line-height: 1.25rem;
}

.text-base {
  font-size: 1rem;
  line-height: 1.5rem;
}

.text-3xl {
  font-size: 1.875rem;
  line-height: 2.25rem;
}

.text-2xl {
  font-size: 1.5rem;
  line-height: 2rem;
}

.text-xl {
  font-size: 1.25rem;
  line-height: 1.75rem;
}

.text-xs {
  font-size: 0.75rem;
  line-height: 1rem;
}

.text-lg {
  font-size: 1.125rem;
  line-height: 1.75rem;
}

.text-\[0\] {
  font-size: 0;
}

.font-bold {
  font-weight: 700;
}

.font-medium {
  font-weight: 500;
}

.font-normal {
  font-weight: 400;
}

.leading-7 {
  line-height: 1.75rem;
}

.leading-8 {
  line-height: 2rem;
}

.leading-none {
  line-height: 1;
}

.leading-loose {
  line-height: 2;
}

.leading-normal {
  line-height: 1.5;
}

.text-h-900 {
  --tw-text-opacity: 1;
  color: rgb(0 0 0 / var(--tw-text-opacity));
}

.text-h-500 {
  --tw-text-opacity: 1;
  color: rgb(102 102 110 / var(--tw-text-opacity));
}

.text-h-800 {
  --tw-text-opacity: 1;
  color: rgb(30 31 33 / var(--tw-text-opacity));
}

.text-h-400 {
  --tw-text-opacity: 1;
  color: rgb(153 153 161 / var(--tw-text-opacity));
}

.text-h-600 {
  --tw-text-opacity: 1;
  color: rgb(53 54 56 / var(--tw-text-opacity));
}

.text-h-200 {
  --tw-text-opacity: 1;
  color: rgb(244 244 246 / var(--tw-text-opacity));
}

.text-h-orange {
  --tw-text-opacity: 1;
  color: rgb(255 85 68 / var(--tw-text-opacity));
}

.opacity-0 {
  opacity: 0;
}

.opacity-100 {
  opacity: 1;
}

.shadow-none {
  --tw-shadow: 0 0 #0000;
  --tw-shadow-colored: 0 0 #0000;
  box-shadow: var(--tw-ring-offset-shadow, 0 0 #0000), var(--tw-ring-shadow, 0 0 #0000), var(--tw-shadow);
}

.outline-none {
  outline: 2px solid transparent;
  outline-offset: 2px;
}

.outline-0 {
  outline-width: 0px;
}

.backdrop-blur {
  --tw-backdrop-blur: blur(8px);
  -webkit-backdrop-filter: var(--tw-backdrop-blur) var(--tw-backdrop-brightness) var(--tw-backdrop-contrast) var(--tw-backdrop-grayscale) var(--tw-backdrop-hue-rotate) var(--tw-backdrop-invert) var(--tw-backdrop-opacity) var(--tw-backdrop-saturate) var(--tw-backdrop-sepia);
  backdrop-filter: var(--tw-backdrop-blur) var(--tw-backdrop-brightness) var(--tw-backdrop-contrast) var(--tw-backdrop-grayscale) var(--tw-backdrop-hue-rotate) var(--tw-backdrop-invert) var(--tw-backdrop-opacity) var(--tw-backdrop-saturate) var(--tw-backdrop-sepia);
}

.transition {
  transition-property: color, background-color, border-color, text-decoration-color, fill, stroke, opacity, box-shadow, transform, filter, -webkit-backdrop-filter;
  transition-property: color, background-color, border-color, text-decoration-color, fill, stroke, opacity, box-shadow, transform, filter, backdrop-filter;
  transition-property: color, background-color, border-color, text-decoration-color, fill, stroke, opacity, box-shadow, transform, filter, backdrop-filter, -webkit-backdrop-filter;
  transition-timing-function: cubic-bezier(0.4, 0, 0.2, 1);
  transition-duration: 150ms;
}

.transition-\[left\] {
  transition-property: left;
  transition-timing-function: cubic-bezier(0.4, 0, 0.2, 1);
  transition-duration: 150ms;
}

.duration-300 {
  transition-duration: 300ms;
}

.duration-200 {
  transition-duration: 200ms;
}

.ease-out {
  transition-timing-function: cubic-bezier(0, 0, 0.2, 1);
}

.ease-in {
  transition-timing-function: cubic-bezier(0.4, 0, 1, 1);
}

.ease-linear {
  transition-timing-function: linear;
}

.content-\[\'\'\] {
  --tw-content: '';
  content: var(--tw-content);
}

.content-\[\'\\f0ab\'\] {
  --tw-content: '\f0ab';
  content: var(--tw-content);
}

.text-hidden {
  position: absolute !important;
  margin: -1px !important;
  height: 1px !important;
  width: 1px !important;
  overflow: hidden !important;
}

.text-overflow-hidden {
  overflow: hidden;
  text-overflow: ellipsis;
  white-space: nowrap;
}

.font-awesome {
  font-family: 'Font Awesome 6 Free';
  font-weight: 700;
}

.fa-chevron-right {
  --tw-content: '\f105';
  content: var(--tw-content);
  font-family: 'Font Awesome 6 Free';
  font-weight: 700;
}

.fa-star {
  --tw-content: '\f005';
  content: var(--tw-content);
  font-family: 'Font Awesome 6 Free';
  font-weight: 700;
}

.menu_toolbar {
  display: none;
}

a,
button {
  pointer-events: auto !important;
}

/* https://github.com/aFarkas/lazysizes#css-api */
@keyframes pulse {

  50% {
    opacity: .5;
  }
}

.lazyload,
.lazyloading {
  animation: pulse 2s cubic-bezier(0.4, 0, 0.6, 1) infinite;
  --tw-bg-opacity: 1;
  background-color: rgb(230 230 233 / var(--tw-bg-opacity));
}

.dark .lazyload,
.dark .lazyloading {
  --tw-bg-opacity: 1;
  background-color: rgb(41 42 45 / var(--tw-bg-opacity));
}

.lazyloaded {
  animation: none;
  --tw-bg-opacity: 1;
  background-color: rgb(255 255 255 / var(--tw-bg-opacity));
}

.lazyload:not([src]) {
  visibility: hidden;
}

/* https://swiperjs.com/demos#navigation */
.swiper-button-next,
.swiper-button-prev {
  --swiper-navigation-size: 1.5rem;
  --swiper-navigation-color: rgba(255, 255, 255, .6);
}

@media not all and (min-width: 1100px) {

  .swiper-button-next,
  .swiper-button-prev {
    display: none !important;
  }
}

.before\:absolute::before {
  content: var(--tw-content);
  position: absolute;
}

.before\:right-0::before {
  content: var(--tw-content);
  right: 0px;
}

.before\:top-0::before {
  content: var(--tw-content);
  top: 0px;
}

.before\:left-\[calc\(theme\(spacing\.12\)\/2\)\]::before {
  content: var(--tw-content);
  left: calc(3rem / 2);
}

.before\:top-16::before {
  content: var(--tw-content);
  top: 4rem;
}

.before\:z-10::before {
  content: var(--tw-content);
  z-index: 10;
}

.before\:h-screen::before {
  content: var(--tw-content);
  height: 100vh;
}

.before\:h-64::before {
  content: var(--tw-content);
  height: 16rem;
}

.before\:h-\[calc\(100\%-65px\)\]::before {
  content: var(--tw-content);
  height: calc(100% - 65px);
}

.before\:w-full::before {
  content: var(--tw-content);
  width: 100%;
}

.before\:w-\[1px\]::before {
  content: var(--tw-content);
  width: 1px;
}

.before\:bg-h-900\/60::before {
  content: var(--tw-content);
  background-color: rgb(0 0 0 / 0.6);
}

.before\:bg-h-900\/50::before {
  content: var(--tw-content);
  background-color: rgb(0 0 0 / 0.5);
}

.before\:bg-h-300::before {
  content: var(--tw-content);
  --tw-bg-opacity: 1;
  background-color: rgb(230 230 233 / var(--tw-bg-opacity));
}

.before\:text-h-500::before {
  content: var(--tw-content);
  --tw-text-opacity: 1;
  color: rgb(102 102 110 / var(--tw-text-opacity));
}

.before\:content-\[\"\"\]::before {
  --tw-content: "";
  content: var(--tw-content);
}

.before\:content-\[\'\'\]::before {
  --tw-content: '';
  content: var(--tw-content);
}

.first\:mt-20:first-child {
  margin-top: 5rem;
}

.empty\:my-10:empty {
  margin-top: 2.5rem;
  margin-bottom: 2.5rem;
}

.empty\:mt-0:empty {
  margin-top: 0px;
}

.hover\:bg-h-300:hover {
  --tw-bg-opacity: 1;
  background-color: rgb(230 230 233 / var(--tw-bg-opacity));
}

.hover\:bg-h-600:hover {
  --tw-bg-opacity: 1;
  background-color: rgb(53 54 56 / var(--tw-bg-opacity));
}

.hover\:text-h-800:hover {
  --tw-text-opacity: 1;
  color: rgb(30 31 33 / var(--tw-text-opacity));
}

.hover\:text-h-200:hover {
  --tw-text-opacity: 1;
  color: rgb(244 244 246 / var(--tw-text-opacity));
}

.hover\:text-h-600:hover {
  --tw-text-opacity: 1;
  color: rgb(53 54 56 / var(--tw-text-opacity));
}

.dark .dark\:border-h-100\/20 {
  border-color: rgb(255 255 255 / 0.2);
}

.dark .dark\:border-h-400 {
  --tw-border-opacity: 1;
  border-color: rgb(153 153 161 / var(--tw-border-opacity));
}

.dark .dark\:border-h-200 {
  --tw-border-opacity: 1;
  border-color: rgb(244 244 246 / var(--tw-border-opacity));
}

.dark .dark\:border-l-h-100 {
  --tw-border-opacity: 1;
  border-left-color: rgb(255 255 255 / var(--tw-border-opacity));
}

.dark .dark\:border-b-h-700 {
  --tw-border-opacity: 1;
  border-bottom-color: rgb(41 42 45 / var(--tw-border-opacity));
}

.dark .dark\:bg-h-800 {
  --tw-bg-opacity: 1;
  background-color: rgb(30 31 33 / var(--tw-bg-opacity));
}

.dark .dark\:bg-h-700 {
  --tw-bg-opacity: 1;
  background-color: rgb(41 42 45 / var(--tw-bg-opacity));
}

.dark .dark\:bg-h-200 {
  --tw-bg-opacity: 1;
  background-color: rgb(244 244 246 / var(--tw-bg-opacity));
}

.dark .dark\:bg-h-800\/80 {
  background-color: rgb(30 31 33 / 0.8);
}

.dark .dark\:bg-h-600 {
  --tw-bg-opacity: 1;
  background-color: rgb(53 54 56 / var(--tw-bg-opacity));
}

.dark .dark\:text-h-200 {
  --tw-text-opacity: 1;
  color: rgb(244 244 246 / var(--tw-text-opacity));
}

.dark .dark\:text-h-400 {
  --tw-text-opacity: 1;
  color: rgb(153 153 161 / var(--tw-text-opacity));
}

.dark .dark\:text-h-300 {
  --tw-text-opacity: 1;
  color: rgb(230 230 233 / var(--tw-text-opacity));
}

.dark .dark\:text-h-blue {
  --tw-text-opacity: 1;
  color: rgb(93 176 215 / var(--tw-text-opacity));
}

.dark .dark\:invert {
  --tw-invert: invert(100%);
  filter: var(--tw-blur) var(--tw-brightness) var(--tw-contrast) var(--tw-grayscale) var(--tw-hue-rotate) var(--tw-invert) var(--tw-saturate) var(--tw-sepia) var(--tw-drop-shadow);
}

.dark .dark\:before\:bg-h-400::before {
  content: var(--tw-content);
  --tw-bg-opacity: 1;
  background-color: rgb(153 153 161 / var(--tw-bg-opacity));
}

.dark .dark\:before\:text-h-200::before {
  content: var(--tw-content);
  --tw-text-opacity: 1;


  color: rgb(244 244 246 / var(--tw-text-opacity));
}

.dark .dark\:hover\:bg-h-600:hover {
  --tw-bg-opacity: 1;
  background-color: rgb(53 54 56 / var(--tw-bg-opacity));
}

.dark .dark\:hover\:text-h-200:hover {
  --tw-text-opacity: 1;
  color: rgb(244 244 246 / var(--tw-text-opacity));
}

@media not all and (min-width: 1820px) {

  .max-2xl\:fixed {
    position: fixed;
  }

  .max-2xl\:right-4 {
    right: 1rem;
  }

  .max-2xl\:-right-60 {
    right: -15rem;
  }

  .max-2xl\:top-20 {
    top: 5rem;
  }

  .max-2xl\:z-40 {
    z-index: 40;
  }

  .max-2xl\:rounded-xl {
    border-radius: 0.75rem;
  }

  .max-2xl\:bg-h-200 {
    --tw-bg-opacity: 1;
    background-color: rgb(244 244 246 / var(--tw-bg-opacity));
  }

  .max-2xl\:p-6 {
    padding: 1.5rem;
  }

  .max-2xl\:pt-8 {
    padding-top: 2rem;
  }

  .max-2xl\:pr-14 {
    padding-right: 3.5rem;
  }

  .max-2xl\:transition-\[right\] {
    transition-property: right;
    transition-timing-function: cubic-bezier(0.4, 0, 0.2, 1);
    transition-duration: 150ms;
  }

  .max-2xl\:duration-200 {
    transition-duration: 200ms;
  }

  .dark .max-2xl\:dark\:bg-h-700 {
    --tw-bg-opacity: 1;
    background-color: rgb(41 42 45 / var(--tw-bg-opacity));
  }
}

@media not all and (min-width: 1100px) {

  .max-lg\:mx-0 {
    margin-left: 0px;
    margin-right: 0px;
  }

  .max-lg\:w-full {
    width: 100%;
  }
}

@media (min-width: 640px) {

  .sm\:h-72 {
    height: 18rem;
  }

  .sm\:h-64 {
    height: 16rem;
  }

  .sm\:w-64 {
    width: 16rem;
  }

  .sm\:grow {
    flex-grow: 1;
  }

  .sm\:grid-cols-2 {
    grid-template-columns: repeat(2, minmax(0, 1fr));
  }

  .sm\:flex-row-reverse {
    flex-direction: row-reverse;
  }

  .sm\:items-center {
    align-items: center;
  }

  .sm\:justify-end {
    justify-content: flex-end;
  }

  .sm\:gap-x-6 {
    -moz-column-gap: 1.5rem;
    column-gap: 1.5rem;
  }

  .sm\:border-t {
    border-top-width: 1px;
  }

  .sm\:border-solid {
    border-style: solid;
  }

  .sm\:border-h-300 {
    --tw-border-opacity: 1;
    border-color: rgb(230 230 233 / var(--tw-border-opacity));
  }
}

@media (min-width: 768px) {

  .md\:grid-cols-2 {
    grid-template-columns: repeat(2, minmax(0, 1fr));
  }

  .md\:grid-cols-4 {
    grid-template-columns: repeat(4, minmax(0, 1fr));
  }

  .md\:gap-8 {
    gap: 2rem;
  }
}

@media (min-width: 1100px) {

  .lg\:top-\[calc\(100\%\+theme\(spacing\.6\)\)\] {
    top: calc(100% + 1.5rem);
  }

  .lg\:left-\[calc\(theme\(\'screens\.lg\'\)\/2\)\] {
    left: calc(1100px / 2);
  }

  .lg\:mx-auto {
    margin-left: auto;
    margin-right: auto;
  }

  .lg\:my-20 {
    margin-top: 5rem;
    margin-bottom: 5rem;
  }

  .lg\:mx-0 {
    margin-left: 0px;
    margin-right: 0px;
  }

  .lg\:mt-40 {
    margin-top: 10rem;
  }

  .lg\:mb-16 {
    margin-bottom: 4rem;
  }

  .lg\:mt-0 {
    margin-top: 0px;
  }

  .lg\:mt-20 {
    margin-top: 5rem;
  }

  .lg\:h-16 {
    height: 4rem;
  }

  .lg\:h-\[calc\(theme\(spacing\.72\)\+theme\(spacing\.7\)\)\] {
    height: calc(18rem + 1.75rem);
  }

  .lg\:h-48 {
    height: 12rem;
  }

  .lg\:w-idx {
    width: 1100px;
  }

  .lg\:w-pem {
    width: var(--h-width);
  }

  .lg\:w-\[calc\(theme\(spacing\.96\)\+theme\(spacing\.20\)\+theme\(spacing\.3\)\)\] {
    width: calc(24rem + 5rem + 0.75rem);
  }

  .lg\:w-32 {
    width: 8rem;
  }

  .lg\:max-w-screen-lg {
    max-width: 1100px;
  }

  .lg\:-translate-y-6 {
    --tw-translate-y: -1.5rem;
    transform: translate(var(--tw-translate-x), var(--tw-translate-y)) rotate(var(--tw-rotate)) skewX(var(--tw-skew-x)) skewY(var(--tw-skew-y)) scaleX(var(--tw-scale-x)) scaleY(var(--tw-scale-y));
  }

  .lg\:grid-cols-3 {
    grid-template-columns: repeat(3, minmax(0, 1fr));
  }

  .lg\:grid-cols-6 {
    grid-template-columns: repeat(6, minmax(0, 1fr));
  }

  .lg\:p-16 {
    padding: 4rem;
  }

  .lg\:px-0 {
    padding-left: 0px;
    padding-right: 0px;
  }

  .lg\:text-3xl {
    font-size: 1.875rem;
    line-height: 2.25rem;
  }

  .lg\:text-2xl {
    font-size: 1.5rem;
    line-height: 2rem;
  }

  .lg\:first\:mt-40:first-child {
    margin-top: 10rem;
  }
}

@media (min-width: 1400px) {

  .xl\:invisible {
    visibility: hidden;
  }

  .xl\:bottom-4 {
    bottom: 1rem;
  }

  .xl\:left-0 {
    left: 0px;
  }

  .xl\:w-c {
    width: calc(100% - 16rem);
  }

  .xl\:px-5 {
    padding-left: 1.25rem;
    padding-right: 1.25rem;
  }

  .xl\:pl-64 {
    padding-left: 16rem;
  }
}

@media (min-width: 1820px) {

  .\32xl\:absolute {
    position: absolute;
  }

  .\32xl\:sticky {
    position: sticky;
  }

  .\32xl\:top-0 {
    top: 0px;
  }

  .\32xl\:top-20 {
    top: 5rem;
  }

  .\32xl\:ml-\[calc\(\(\(1100px\+theme\(width\.pem\)\)\/2\)\+theme\(spacing\.5\)\)\] {
    margin-left: calc(((1100px + var(--h-width)) / 2) + 1.25rem);
  }

  .\32xl\:block {
    display: block;
  }

  .\32xl\:hidden {
    display: none;
  }

  .\32xl\:h-full {
    height: 100%;
  }

  .\32xl\:px-8 {
    padding-left: 2rem;
    padding-right: 2rem;
  }
}

.\[\&_h2\]\:px-4 h2 {
  padding-left: 1rem;
  padding-right: 1rem;
}

.\[\&_a\]\:text-4xl a {
  font-size: 2.25rem;
  line-height: 2.5rem;
}

.\[\&_a\]\:font-bold a {
  font-weight: 700;
}

.\[\&_a\]\:text-h-200 a {
  --tw-text-opacity: 1;
  color: rgb(244 244 246 / var(--tw-text-opacity));
}

.\[\&\+\.description\]\:text-h-200+.description {
  --tw-text-opacity: 1;
  color: rgb(244 244 246 / var(--tw-text-opacity));
}

.\[\&_img\]\:hidden img {
  display: none;
}

.\[\&\>div\]\:before\:hidden>div::before {
  content: var(--tw-content);
  display: none;
}

.\[\&\:last-child\>div\]\:before\:hidden:last-child>div::before {
  content: var(--tw-content);
  display: none;
}

#comments .tt_more_preview_comments_wrap {

  margin-top: 1rem;

  margin-bottom: 1rem;

  border-radius: 0.75rem;

  --tw-bg-opacity: 1;

  background-color: rgb(41 42 45 / var(--tw-bg-opacity));

  padding-top: 0.75rem;

  padding-bottom: 0.75rem;

  padding-left: 1rem;

  padding-right: 1rem;

  font-size: 0.875rem;

  line-height: 1.25rem;

  --tw-text-opacity: 1;

  color: rgb(244 244 246 / var(--tw-text-opacity));

  transition-duration: 200ms
}

#comments .tt_more_preview_comments_wrap:hover {

  --tw-bg-opacity: 1;

  background-color: rgb(53 54 56 / var(--tw-bg-opacity))
}

#comments .tt_more_preview_comments_wrap::after {

  margin-left: 0.5rem;

  --tw-content: '\f0ab';

  content: var(--tw-content);

  font-family: 'Font Awesome 6 Free';

  font-weight: 700
}

#comments .tistoryProfileLayerTrigger {

  display: none
}

#content .container_postbtn .btn_subscription {

  margin-left: 0.5rem;

  margin-right: 0px;

  border-width: 0px
}

#content .container_postbtn .btn_subscription .txt_state {

  position: absolute !important;

  margin: -1px !important;

  height: 1px !important;

  width: 1px !important;

  overflow: hidden !important
}

#content .container_postbtn .btn_subscription .txt_tool_id,
#content .container_postbtn .btn_subscription .ico_check_type1 {

  display: none
}

#content .container_postbtn .btn_subscription::before {

  font-size: 0.875rem;

  line-height: 1.25rem;

  --tw-content: '\f005';

  content: var(--tw-content);

  font-family: 'Font Awesome 6 Free';

  font-weight: 700
}

#content .contents_style {

  padding: 0px;

  text-align: left;

  line-height: 2;

  --tw-text-opacity: 1;

  color: rgb(53 54 56 / var(--tw-text-opacity))
}

.dark #content .contents_style {

  --tw-text-opacity: 1;

  color: rgb(244 244 246 / var(--tw-text-opacity))
}

#content .contents_style a {

  --tw-text-opacity: 1;

  color: rgb(255 85 68 / var(--tw-text-opacity));

  text-decoration-thickness: 0px
}

.dark #content .contents_style a {

  --tw-text-opacity: 1;

  color: rgb(93 176 215 / var(--tw-text-opacity))
}

#content .contents_style h2,
#content .contents_style h3,
#content .contents_style h4 {

  margin-top: 1.25rem;

  margin-bottom: 1.25rem;

  scroll-margin-top: 5rem;

  font-weight: 500
}

#content .contents_style h2 a,
#content .contents_style h3 a,
#content .contents_style h4 a {

  --tw-text-opacity: 1;

  color: rgb(53 54 56 / var(--tw-text-opacity))
}

.dark #content .contents_style h2 a,
.dark #content .contents_style h3 a,
.dark #content .contents_style h4 a {

  --tw-text-opacity: 1;

  color: rgb(244 244 246 / var(--tw-text-opacity))
}

#content .contents_style h2 {

  font-size: 1.25rem;

  line-height: 1.75rem
}

@media (min-width: 1100px) {

  #content .contents_style h2 {

    font-size: 1.5rem;

    line-height: 2rem
  }
}

#content .contents_style h3 {

  font-size: 1.125rem;

  line-height: 1.75rem
}

@media (min-width: 1100px) {

  #content .contents_style h3 {

    font-size: 1.25rem;

    line-height: 1.75rem
  }
}

#content .contents_style h4 {

  font-size: 1rem;

  line-height: 1.5rem
}

@media (min-width: 1100px) {

  #content .contents_style h4 {

    font-size: 1.125rem;

    line-height: 1.75rem
  }
}

#content .contents_style ol[data-ke-list-type],
#content .contents_style ul[data-ke-list-type] {

  margin-top: 1.25rem;

  margin-bottom: 1.25rem;

  display: flex;

  list-style-position: inside;

  flex-direction: column;

  row-gap: 0.25rem
}

#content .contents_style ol[data-ke-list-type] ol[data-ke-list-type],
#content .contents_style ol[data-ke-list-type] ul[data-ke-list-type],
#content .contents_style ul[data-ke-list-type] ol[data-ke-list-type],
#content .contents_style ul[data-ke-list-type] ul[data-ke-list-type] {

  margin-top: 0px;

  margin-bottom: 0px;

  margin-left: 1.5rem
}

#content .contents_style p,
#content .contents_style ol[data-ke-list-type],
#content .contents_style ul[data-ke-list-type],
#content .contents_style table[data-ke-align],
#content .contents_style blockquote[data-ke-style=style2],
#content .contents_style blockquote[data-ke-style=style3] {

  --tw-text-opacity: 1;

  color: rgb(53 54 56 / var(--tw-text-opacity))
}

.dark #content .contents_style p,
.dark #content .contents_style ol[data-ke-list-type],
.dark #content .contents_style ul[data-ke-list-type],
.dark #content .contents_style table[data-ke-align],
.dark #content .contents_style blockquote[data-ke-style=style2],
.dark #content .contents_style blockquote[data-ke-style=style3] {

  --tw-text-opacity: 1;

  color: rgb(230 230 233 / var(--tw-text-opacity))
}

#content .contents_style p b,
#content .contents_style p strong,
#content .contents_style ol[data-ke-list-type] b,
#content .contents_style ol[data-ke-list-type] strong,
#content .contents_style ul[data-ke-list-type] b,
#content .contents_style ul[data-ke-list-type] strong,
#content .contents_style table[data-ke-align] b,
#content .contents_style table[data-ke-align] strong,
#content .contents_style blockquote[data-ke-style=style2] b,
#content .contents_style blockquote[data-ke-style=style2] strong,
#content .contents_style blockquote[data-ke-style=style3] b,
#content .contents_style blockquote[data-ke-style=style3] strong {

  font-weight: 700
}

#content .contents_style p a,
#content .contents_style ol[data-ke-list-type] a,
#content .contents_style ul[data-ke-list-type] a,
#content .contents_style table[data-ke-align] a,
#content .contents_style blockquote[data-ke-style=style2] a,
#content .contents_style blockquote[data-ke-style=style3] a {

  display: inline-block;

  --tw-text-opacity: 1;

  color: rgb(255 85 68 / var(--tw-text-opacity))
}

.dark #content .contents_style p a,
.dark #content .contents_style ol[data-ke-list-type] a,
.dark #content .contents_style ul[data-ke-list-type] a,
.dark #content .contents_style table[data-ke-align] a,
.dark #content .contents_style blockquote[data-ke-style=style2] a,
.dark #content .contents_style blockquote[data-ke-style=style3] a {

  --tw-text-opacity: 1;

  color: rgb(93 176 215 / var(--tw-text-opacity))
}

#content .contents_style p code,
#content .contents_style ol[data-ke-list-type] code,
#content .contents_style ul[data-ke-list-type] code,
#content .contents_style table[data-ke-align] code,
#content .contents_style blockquote[data-ke-style=style2] code,
#content .contents_style blockquote[data-ke-style=style3] code {

  position: relative;

  top: -1px;

  white-space: normal;

  border-radius: 0.375rem;

  --tw-bg-opacity: 1;

  background-color: rgb(244 244 246 / var(--tw-bg-opacity));

  padding-left: 0.5rem;

  padding-right: 0.5rem;

  padding-top: 0.125rem;

  padding-bottom: 0.125rem;

  font-family: Noto Sans KR, ui-sans-serif, system-ui, -apple-system, BlinkMacSystemFont, "Segoe UI", Roboto, "Helvetica Neue", Arial, "Noto Sans", sans-serif, "Apple Color Emoji", "Segoe UI Emoji", "Segoe UI Symbol", "Noto Color Emoji";

  font-size: 0.875rem;

  line-height: 1.25rem;

  --tw-text-opacity: 1;

  color: rgb(255 255 / var(--tw-text-opacity))
}

.dark #content .contents_style p code,
.dark #content .contents_style ol[data-ke-list-type] code,
.dark #content .contents_style ul[data-ke-list-type] code,
.dark #content .contents_style table[data-ke-align] code,
.dark #content .contents_style blockquote[data-ke-style=style2] code,
.dark #content .contents_style blockquote[data-ke-style=style3] code {

  --tw-bg-opacity: 1;

  background-color: rgb(41 42 45 / var(--tw-bg-opacity));

  --tw-text-opacity: 1;

  color: rgb(230 230 233 / var(--tw-text-opacity))
}

#content .contents_style figure,
#content .contents_style pre,
#content .contents_style table[data-ke-align],
#content .contents_style [data-ke-type=moreLess] {

  margin-top: 1.25rem;

  margin-bottom: 1.25rem
}

.dark #content .contents_style hr {

  --tw-brightness: brightness(0);

  --tw-invert: invert(100%);

  filter: var(--tw-blur) var(--tw-brightness) var(--tw-contrast) var(--tw-grayscale) var(--tw-hue-rotate) var(--tw-invert) var(--tw-saturate) var(--tw-sepia) var(--tw-drop-shadow)
}

#content .contents_style table[data-ke-align] td,
#content .contents_style table[data-ke-align] th {

  box-sizing: border-box;

  border-width: 0px;

  border-bottom-width: 1px;

  border-style: solid;

  --tw-border-opacity: 1;

  border-color: rgb(153 153 161 / var(--tw-border-opacity));

  background-color: transparent;

  padding-left: 0.75rem;

  padding-right: 0.75rem;

  padding-top: 1rem;

  padding-bottom: 1rem;

  font-size: 0.875rem;

  line-height: 1.25rem;

  line-height: 2;

  --tw-text-opacity: 1;

  color: rgb(53 54 56 / var(--tw-text-opacity))
}

.dark #content .contents_style table[data-ke-align] td,
.dark #content .contents_style table[data-ke-align] th {

  --tw-text-opacity: 1;
  border: 1px solid #ffffff
  color: rgb(244 244 246 / var(--tw-text-opacity))
}

#content .contents_style figure figcaption {

  text-align: center;

  font-size: 0.875rem;

  line-height: 1.25rem;

  line-height: 2;

  --tw-text-opacity: 1;

  color: rgb(153 153 161 / var(--tw-text-opacity))
}

#content .contents_style figure img {

  border-radius: 0.75rem
}

#content .contents_style figure.imageblock.alignCenter,
#content .contents_style figure.imagegridblock {

  max-width: none !important
}

@media not all and (min-width: 1100px) {

  #content .contents_style figure.imageblock.alignCenter,
  #content .contents_style figure.imagegridblock {

    margin-left: 0px !important;

    margin-right: 0px !important;

    width: 100% !important
  }
}

#content .contents_style figure.imageblock span,
#content .contents_style figure.imageblock a,
#content .contents_style figure.imagegridblock span,
#content .contents_style figure.imagegridblock a {

  position: relative;

  display: block;

  height: auto;

  max-height: 100%;

  width: auto;

  max-width: 100%
}

#content .contents_style figure.imageblock span::after,
#content .contents_style figure.imageblock a::after,
#content .contents_style figure.imagegridblock span::after,
#content .contents_style figure.imagegridblock a::after {

  display: block;

  height: 0px;

  width: 100%;

  --tw-content: '';

  content: var(--tw-content)
}

#content .contents_style figure.imageblock span img,
#content .contents_style figure.imageblock a img,
#content .contents_style figure.imagegridblock span img,
#content .contents_style figure.imagegridblock a img {

  position: absolute;

  top: 0px;

  left: 0px;

  display: block;

  height: 100%;

  width: 100%
}

#content .contents_style figure.imageslideblock .image-container {

  height: auto !important;

  max-height: 100% !important;

  min-height: 0px !important;

  width: auto !important;

  max-width: 100% !important
}

#content .contents_style figure.imageslideblock .image-container::after {

  display: block;

  height: 0px;

  width: 100%;

  --tw-content: '';

  content: var(--tw-content)
}

#content .contents_style figure.imageslideblock .image-container .selected {

  position: absolute;

  top: 0px;

  left: 0px;

  display: flex;

  height: 100%;

  max-height: 100%;

  width: 100%;

  max-width: 100%;

  align-items: center;

  justify-content: center
}

#content .contents_style figure.imageslideblock .image-container .selected img {

  display: block;

  height: auto;

  width: auto
}

#content .contents_style figure[data-ke-type=opengraph] a {

  border-width: 0px
}

#content .contents_style figure[data-ke-type=opengraph] a .og-image {

  overflow: hidden;

  border-top-left-radius: 0.75rem;

  border-bottom-left-radius: 0.75rem;

  border-right-width: 0px
}

#content .contents_style figure[data-ke-type=opengraph] .og-text {

  border-top-right-radius: 0.75rem;

  border-bottom-right-radius: 0.75rem;

  --tw-bg-opacity: 1;

  background-color: rgb(244 244 246 / var(--tw-bg-opacity))
}

.dark #content .contents_style figure[data-ke-type=opengraph] .og-text {

  --tw-bg-opacity: 1;

  background-color: rgb(41 42 45 / var(--tw-bg-opacity))
}

#content .contents_style figure[data-ke-type=opengraph] .og-text .og-title,
#content .contents_style figure[data-ke-type=opengraph] .og-text .og-desc,
#content .contents_style figure[data-ke-type=opengraph] .og-text .og-host {

  font-family: Noto Sans KR, ui-sans-serif, system-ui, -apple-system, BlinkMacSystemFont, "Segoe UI", Roboto, "Helvetica Neue", Arial, "Noto Sans", sans-serif, "Apple Color Emoji", "Segoe UI Emoji", "Segoe UI Symbol", "Noto Color Emoji";

  --tw-text-opacity: 1;

  color: rgb(102 102 110 / var(--tw-text-opacity))
}

.dark #content .contents_style figure[data-ke-type=opengraph] .og-text .og-title,
.dark #content .contents_style figure[data-ke-type=opengraph] .og-text .og-desc,
.dark #content .contents_style figure[data-ke-type=opengraph] .og-text .og-host {

  --tw-text-opacity: 1;

  color: rgb(244 244 246 / var(--tw-text-opacity))
}

#content .contents_style figure[data-ke-type=opengraph] .og-text .og-title {

  font-weight: 700;

  --tw-text-opacity: 1;

  color: rgb(53 54 56 / var(--tw-text-opacity))
}

#content .contents_style figure.fileblock {

  border-radius: 0.75rem;

  border-width: 0px;

  --tw-bg-opacity: 1;

  background-color: rgb(244 244 246 / var(--tw-bg-opacity))
}

.dark #content .contents_style figure.fileblock {

  --tw-bg-opacity: 1;

  background-color: rgb(41 42 45 / var(--tw-bg-opacity))
}

#content .contents_style figure.fileblock .filename {

  margin-top: 0.75rem
}

#content .contents_style figure.fileblock .filename .name {

  height: auto
}

.dark #content .contents_style figure.fileblock .filename,
.dark #content .contents_style figure.fileblock .size {

  --tw-text-opacity: 1;

  color: rgb(244 244 246 / var(--tw-text-opacity))
}

.dark #content .contents_style figure.fileblock .image,
.dark #content .contents_style figure.fileblock a::after {

  --tw-brightness: brightness(0);

  --tw-invert: invert(100%);

  filter: var(--tw-blur) var(--tw-brightness) var(--tw-contrast) var(--tw-grayscale) var(--tw-hue-rotate) var(--tw-invert) var(--tw-saturate) var(--tw-sepia) var(--tw-drop-shadow)
}

#content .contents_style [data-ke-type=moreLess] {

  position: relative
}

#content .contents_style [data-ke-type=moreLess]::before {

  position: absolute;

  top: 1rem;

  right: 0px;

  z-index: -1;

  height: 0px;

  width: 100%;

  border-bottom-width: 1px;

  border-style: dashed;

  --tw-border-opacity: 1;

  border-color: rgb(153 153 161 / var(--tw-border-opacity));

  --tw-content: '';

  content: var(--tw-content)
}

#content .contents_style [data-ke-type=moreLess].open .btn-toggle-moreless::before {

  --tw-content: '\f0ab';

  content: var(--tw-content);

  font-family: 'Font Awesome 6 Free';

  font-weight: 700
}

#content .contents_style [data-ke-type=moreLess] .btn-toggle-moreless {

  display: inline-block;

  border-radius: 0.75rem;

  --tw-bg-opacity: 1;

  background-color: rgb(41 42 45 / var(--tw-bg-opacity));

  padding-left: 0.75rem;

  padding-right: 0.75rem;

  padding-top: 0.25rem;

  padding-bottom: 0.25rem;

  font-size: 0.875rem;

  line-height: 1.25rem;

  font-weight: 700;

  --tw-text-opacity: 1;

  color: rgb(244 244 246 / var(--tw-text-opacity))
}

#content .contents_style [data-ke-type=moreLess] .btn-toggle-moreless::before {

  margin-right: 0.375rem;

  --tw-content: '\f0a9';

  content: var(--tw-content);

  font-family: 'Font Awesome 6 Free';

  font-weight: 700
}

#content .contents_style [data-ke-type=moreLess] .moreless-content {

  margin-top: 1.5rem
}

#content .contents_style blockquote[data-ke-style] {

  margin-top: 1rem;

  margin-bottom: 1rem;

  font-family: initial;

  font-family: Noto Sans KR, ui-sans-serif, system-ui, -apple-system, BlinkMacSystemFont, "Segoe UI", Roboto, "Helvetica Neue", Arial, "Noto Sans", sans-serif, "Apple Color Emoji", "Segoe UI Emoji", "Segoe UI Symbol", "Noto Color Emoji";

  --tw-text-opacity: 1;

  color: rgb(53 54 56 / var(--tw-text-opacity))
}

.dark #content .contents_style blockquote[data-ke-style] {

  --tw-text-opacity: 1;

  color: rgb(244 244 246 / var(--tw-text-opacity))
}

#content .contents_style blockquote[data-ke-style][data-ke-style=style1] {

  padding-top: 1.75rem;

  font-size: 1.25rem;

  line-height: 1.75rem;

  font-weight: 500;

  line-height: 2;

  --tw-text-opacity: 1;

  color: rgb(53 54 56 / var(--tw-text-opacity))
}

.dark #content .contents_style blockquote[data-ke-style][data-ke-style=style1] {

  --tw-text-opacity: 1;

  color: rgb(244 244 246 / var(--tw-text-opacity))
}

#content .contents_style blockquote[data-ke-style][data-ke-style=style2] {

  border-left-width: 2px;

  border-style: solid;

  --tw-border-opacity: 1;

  border-color: rgb(230 230 233 / var(--tw-border-opacity));

  padding-left: 0.75rem;

  padding-right: 0.25rem;

  text-align: left;

  font-size: 0.875rem;

  line-height: 1.25rem;

  line-height: 2;

  --tw-text-opacity: 1;

  color: rgb(153 153 161 / var(--tw-text-opacity))
}

.dark #content .contents_style blockquote[data-ke-style][data-ke-style=style2] {

  --tw-border-opacity: 1;

  border-color: rgb(153 153 161 / var(--tw-border-opacity))
}

#content .contents_style blockquote[data-ke-style][data-ke-style=style3] {

  border-radius: 0.75rem;

  border-width: 0px;

  --tw-bg-opacity: 1;

  background-color: rgb(244 244 246 / var(--tw-bg-opacity));

  line-height: 2;

  --tw-text-opacity: 1;

  color: rgb(153 153 161 / var(--tw-text-opacity))
}

.dark #content .contents_style blockquote[data-ke-style][data-ke-style=style3] {

  --tw-bg-opacity: 1;

  background-color: rgb(41 42 45 / var(--tw-bg-opacity));

  --tw-text-opacity: 1;

  color: rgb(153 153 161 / var(--tw-text-opacity))
}

#content .contents_style pre code {

  border-radius: 0.75rem;

  padding-left: 1rem;

  padding-right: 1rem;

  line-height: 1.5
}

#content .contents_style pre code.hljs {

  --tw-bg-opacity: 1;

  background-color: rgb(244 244 246 / var(--tw-bg-opacity))
}

.dark #content .contents_style pre code.hljs {

  --tw-bg-opacity: 1;

  background-color: rgb(41 42 45 / var(--tw-bg-opacity))
}

#content .container_postbtn {

  padding: 0px;

  padding-top: 2.25rem;

  --tw-text-opacity: 1;

  color: rgb(53 54 56 / var(--tw-text-opacity))
}

.dark #content .container_postbtn {

  --tw-text-opacity: 1;

  color: rgb(244 244 246 / var(--tw-text-opacity))
}

#content .container_postbtn .postbtn_like>.wrap_btn:not([id^=reaction-])>button,
#content .container_postbtn .btn_subscription {

  display: inline-block;

  height: 2.25rem;

  width: 2.25rem;

  cursor: pointer;

  border-radius: 0.375rem;

  --tw-bg-opacity: 1;

  background-color: rgb(244 244 246 / var(--tw-bg-opacity));

  padding: 0px;

  font-size: 0;

  line-height: 1;

  --tw-shadow: 0 0 #0000;

  --tw-shadow-colored: 0 0 #0000;

  box-shadow: var(--tw-ring-offset-shadow, 0 0 #0000), var(--tw-ring-shadow, 0 0 #0000), var(--tw-shadow);

  outline-width: 0px;

  transition-duration: 200ms
}

#content .container_postbtn .postbtn_like>.wrap_btn:not([id^=reaction-])>button::before,
#content .container_postbtn .btn_subscription::before {

  content: var(--tw-content);

  --tw-text-opacity: 1;

  color: rgb(102 102 110 / var(--tw-text-opacity))
}

#content .container_postbtn .postbtn_like>.wrap_btn:not([id^=reaction-])>button:hover,
#content .container_postbtn .btn_subscription:hover {

  --tw-bg-opacity: 1;

  background-color: rgb(230 230 233 / var(--tw-bg-opacity))
}

.dark #content .container_postbtn .postbtn_like>.wrap_btn:not([id^=reaction-])>button,
.dark #content .container_postbtn .btn_subscription {

  --tw-bg-opacity: 1;

  background-color: rgb(41 42 45 / var(--tw-bg-opacity))
}

.dark #content .container_postbtn .postbtn_like>.wrap_btn:not([id^=reaction-])>button::before,
.dark #content .container_postbtn .btn_subscription::before {

  content: var(--tw-content);

  --tw-text-opacity: 1;

  color: rgb(244 244 246 / var(--tw-text-opacity))
}

.dark #content .container_postbtn .postbtn_like>.wrap_btn:not([id^=reaction-])>button:hover,
.dark #content .container_postbtn .btn_subscription:hover {

  --tw-bg-opacity: 1;

  background-color: rgb(53 54 56 / var(--tw-bg-opacity))
}

#content .container_postbtn .postbtn_like {

  display: flex;

  -moz-column-gap: 0.5rem;

  column-gap: 0.5rem;

  border-width: 0px;

  padding: 0px
}

#content .container_postbtn .postbtn_like .wrap_btn {

  display: inline-block;

  border-width: 0px
}

#content .container_postbtn .postbtn_like .wrap_btn button::before,
#content .container_postbtn .postbtn_like .wrap_btn button[data-entry-id]::before,
#content .container_postbtn .postbtn_like .wrap_btn .uoc-count::before {

  font-size: 0.875rem;

  line-height: 1.25rem;

  font-weight: 700
}

#content .container_postbtn .postbtn_like .wrap_btn .ico_like,
#content .container_postbtn .postbtn_like .wrap_btn .ico_share,
#content .container_postbtn .postbtn_like .wrap_btn .ico_statistics,
#content .container_postbtn .postbtn_like .wrap_btn .ico_etc {

  background-image: none;

  position: absolute !important;

  margin: -1px !important;

  height: 1px !important;

  width: 1px !important;

  overflow: hidden !important
}

#content .container_postbtn .postbtn_like .wrap_btn[id^=reaction-] button {

  height: 2.25rem;

  width: 4rem;

  border-radius: 0.375rem;

  --tw-bg-opacity: 1;

  background-color: rgb(41 42 45 / var(--tw-bg-opacity))
}

#content .container_postbtn .postbtn_like .wrap_btn[id^=reaction-] button:hover {

  --tw-bg-opacity: 1;

  background-color: rgb(53 54 56 / var(--tw-bg-opacity))
}

#content .container_postbtn .postbtn_like .wrap_btn[id^=reaction-] button .uoc-icon {

  --tw-text-opacity: 1;

  color: rgb(244 244 246 / var(--tw-text-opacity))
}

#content .container_postbtn .postbtn_like .wrap_btn[id^=reaction-] button .uoc-count {

  font-weight: 700;

  line-height: 1
}

#content .container_postbtn .postbtn_like .wrap_btn[id^=reaction-] button .uoc-count::before {

  margin-right: 0.375rem;

  font-size: 0.875rem;

  line-height: 1.25rem;

  --tw-content: '\f004';

  content: var(--tw-content);

  font-family: 'Font Awesome 6 Free';

  font-weight: 700
}

#content .container_postbtn .postbtn_like .wrap_btn.wrap_btn_share .btn_share::before {

  --tw-content: '\f1e0';

  content: var(--tw-content);

  font-family: 'Font Awesome 6 Free';

  font-weight: 700
}

#content .container_postbtn .postbtn_like .wrap_btn button[data-entry-id]::before {

  --tw-content: '\f200';

  content: var(--tw-content);

  font-family: 'Font Awesome 6 Free';

  font-weight: 700
}

#content .container_postbtn .postbtn_like .wrap_btn.wrap_btn_etc .btn_etc1::before {

  --tw-content: '\f0ad';

  content: var(--tw-content);

  font-family: 'Font Awesome 6 Free';

  font-weight: 700
}

#content .container_postbtn .postbtn_like .wrap_btn.wrap_btn_etc .btn_etc2::before {

  --tw-content: '\f141';

  content: var(--tw-content);

  font-family: 'Font Awesome 6 Free';

  font-weight: 700
}

#tistoryCclLayer {

  border-radius: 0.375rem;

  border-width: 0px;

  --tw-bg-opacity: 1;

  background-color: rgb(244 244 246 / var(--tw-bg-opacity));

  --tw-text-opacity: 1;

  color: rgb(153 153 161 / var(--tw-text-opacity));

  --tw-shadow: 0 0 #0000;

  --tw-shadow-colored: 0 0 #0000;

  box-shadow: var(--tw-ring-offset-shadow, 0 0 #0000), var(--tw-ring-shadow, 0 0 #0000), var(--tw-shadow)
}

.dark #tistoryCclLayer {

  --tw-bg-opacity: 1;

  background-color: rgb(41 42 45 / var(--tw-bg-opacity));

  --tw-text-opacity: 1;

  color: rgb(230 230 233 / var(--tw-text-opacity))
}

#tistoryCclLayer span {

  --tw-text-opacity: 1;

  color: rgb(153 153 161 / var(--tw-text-opacity))
}

#tistoryCclLayer .ico_arrbt {

  display: none
}

#tistorySnsLayer,
#tistoryEtcLayer {

  border-radius: 0.375rem;

  --tw-bg-opacity: 1;

  background-color: rgb(244 244 246 / var(--tw-bg-opacity));

  --tw-shadow: 0 0 #0000;

  --tw-shadow-colored: 0 0 #0000;

  box-shadow: var(--tw-ring-offset-shadow, 0 0 #0000), var(--tw-ring-shadow, 0 0 #0000), var(--tw-shadow)
}

.dark #tistorySnsLayer,
.dark #tistoryEtcLayer {

  --tw-bg-opacity: 1;

  background-color: rgb(41 42 45 / var(--tw-bg-opacity))
}

#tistorySnsLayer .btn_mark,
#tistoryEtcLayer .btn_mark {

  --tw-text-opacity: 1;

  color: rgb(153 153 161 / var(--tw-text-opacity))
}

.dark #tistorySnsLayer .btn_mark,
.dark #tistoryEtcLayer .btn_mark {

  --tw-text-opacity: 1;

  color: rgb(230 230 233 / var(--tw-text-opacity))
}

#tistorySnsLayer .btn_mark:hover,
#tistoryEtcLayer .btn_mark:hover {

  --tw-bg-opacity: 1;

  background-color: rgb(230 230 233 / var(--tw-bg-opacity))
}

.dark #tistorySnsLayer .btn_mark:hover,
.dark #tistoryEtcLayer .btn_mark:hover {

  --tw-bg-opacity: 1;

  background-color: rgb(53 54 56 / var(--tw-bg-opacity));

  --tw-text-opacity: 1;

  color: rgb(244 244 246 / var(--tw-text-opacity))
}

#tistorySnsLayer .ico_arrbt,
#tistoryEtcLayer .ico_arrbt {

  display: none
}

#tistorySnsLayer .bundle_post a,
#tistoryEtcLayer .bundle_post a {

  --tw-text-opacity: 1;

  color: rgb(153 153 161 / var(--tw-text-opacity));

  text-decoration-line: none
}

.dark #tistorySnsLayer .bundle_post a,
.dark #tistoryEtcLayer .bundle_post a {

  --tw-text-opacity: 1;

  color: rgb(230 230 233 / var(--tw-text-opacity))
}

#tags a {

  margin-top: 0.75rem;

  border-radius: 0.375rem;

  --tw-bg-opacity: 1;

  background-color: rgb(244 244 246 / var(--tw-bg-opacity));

  padding-top: 0.5rem;

  padding-bottom: 0.5rem;

  padding-left: 1rem;

  padding-right: 1rem;

  font-size: 0.875rem;

  line-height: 1.25rem;

  --tw-text-opacity: 1;

  color: rgb(102 102 110 / var(--tw-text-opacity))
}

.dark #tags a {

  --tw-bg-opacity: 1;

  background-color: rgb(41 42 45 / var(--tw-bg-opacity));

  --tw-text-opacity: 1;

  color: rgb(244 244 246 / var(--tw-text-opacity))
}

#tags a:hover {

  --tw-bg-opacity: 1;

  background-color: rgb(53 54 56 / var(--tw-bg-opacity));

  --tw-text-opacity: 1;

  color: rgb(244 244 246 / var(--tw-text-opacity))
}

#tags a:first-of-type::before {

  margin-right: 0.5rem;

  --tw-content: '\f02b';

  content: var(--tw-content);

  font-family: 'Font Awesome 6 Free';

  font-weight: 700
}

[data-mode=list] .list {
  display: flex;
  flex-direction: column;
  row-gap: 1.5rem
}

@media (min-width: 640px) {
  [data-mode=list] .list {
    row-gap: 0px
  }
}

[data-mode=list] .post {
  display: flex;
  flex-direction: column;
  row-gap: 1rem
}

@media (min-width: 640px) {
  [data-mode=list] .post {
    height: 18rem;
    flex-direction: row-reverse;
    align-items: center;
    justify-content: flex-end;
    -moz-column-gap: 1.5rem;
    column-gap: 1.5rem;
    border-top-width: 1px;
    border-style: solid;
    --tw-border-opacity: 1;
    border-color: rgb(230 230 233 / var(--tw-border-opacity))
  }

  .dark [data-mode=list] .post {
    --tw-border-opacity: 1;
    border-color: rgb(153 153 161 / var(--tw-border-opacity))
  }
}

[data-mode=list] .post .thumbnail img {
  width: 100%;
  max-width: none
}

@media (min-width: 640px) {
  [data-mode=list] .post .thumbnail img {
    height: 16rem;
    width: 16rem
  }
}

[data-mode=list] .post .description {
  row-gap: 0.5rem
}

@media (min-width: 640px) {
  [data-mode=list] .post .description {
    flex-grow: 1
  }
}

[data-mode=list] .post .description h2 {
  font-size: 1.25rem;
  line-height: 1.75rem;
  font-weight: 700
}

@media (min-width: 1100px) {
  [data-mode=list] .post .description h2 {
    font-size: 1.5rem;
    line-height: 2rem
  }
}

[data-mode=list] .post .description p {
  margin-top: 0.75rem;
  max-height: 5rem
}

[data-mode=list] .post .description p::after {
  top: calc(3.5rem + 0.25rem)
}

[data-mode=grid] .list {
  display: grid;
  grid-template-columns: repeat(1, minmax(0, 1fr));
  gap: 1.5rem
}

@media (min-width: 768px) {
  [data-mode=grid] .list {
    grid-template-columns: repeat(2, minmax(0, 1fr));
    gap: 2rem
  }
}

@media (min-width: 1100px) {
  [data-mode=grid] .list {
    grid-template-columns: repeat(3, minmax(0, 1fr));
    gap: 3rem
  }
}

[data-mode=grid] .post {
  display: flex;
  flex-direction: column;
  row-gap: 1rem
}

[data-mode=grid] .post .thumbnail img {
  height: 16rem;
  width: 100%
}

[data-mode=grid] .post .description .category {
  display: none
}

[data-mode=grid] .post .description h2 {
  font-size: 1.25rem;
  line-height: 1.75rem;
  font-weight: 700
}

[data-mode=grid] .post .description time {
  display: none
}

[data-mode=grid] .post .description p {
  margin-top: 0.5rem;
  max-height: 3.5rem
}

[data-mode=grid] .post .description p::after {
  top: 1.75rem
}

[data-mode=zigzag] .list {
  display: flex;
  flex-direction: column;
  row-gap: 6rem
}

@media (min-width: 1100px) {
  [data-mode=zigzag] .list {
    row-gap: 7rem
  }
}

[data-mode=zigzag] .post {
  position: relative;
  display: flex;
  flex-direction: column;
  row-gap: 1rem
}

@media (min-width: 1100px) {
  [data-mode=zigzag] .post {
    flex-direction: row
  }
}

[data-mode=zigzag] .post:last-child::before {
  display: none
}

[data-mode=zigzag] .post::before {
  position: absolute;
  top: calc(100% + 1.5rem);
  left: calc(100% / 2);
  height: 3rem;
  width: 0.125rem;
  --tw-bg-opacity: 1;
  background-color: rgb(230 230 233 / var(--tw-bg-opacity));
  --tw-content: '';
  content: var(--tw-content)
}

.dark [data-mode=zigzag] .post::before {
  --tw-bg-opacity: 1;
  background-color: rgb(53 54 56 / var(--tw-bg-opacity))
}

@media (min-width: 1100px) {
  [data-mode=zigzag] .post::before {
    top: calc(100% + 1.5rem);
    left: calc(1100px / 2);
    height: 4rem
  }
}

[data-mode=zigzag] .post .thumbnail img {
  position: relative;
  z-index: 10;
  width: 100%;
  -o-object-fit: cover;
  object-fit: cover
}

@media (min-width: 1100px) {
  [data-mode=zigzag] .post .thumbnail img {
    height: calc(18rem + 1.75rem);
    width: calc(24rem + 5rem + 0.75rem);
    max-width: none
  }
}

[data-mode=zigzag] .post .description {
  row-gap: 0.5rem;
  --tw-bg-opacity: 1;
  background-color: rgb(244 244 246 / var(--tw-bg-opacity));
  padding: 2.5rem
}

.dark [data-mode=zigzag] .post .description {
  --tw-bg-opacity: 1;
  background-color: rgb(41 42 45 / var(--tw-bg-opacity))
}

@media (min-width: 1100px) {
  [data-mode=zigzag] .post .description {
    padding: 4rem
  }
}

[data-mode=zigzag] .post .description h2 {
  font-size: 1.25rem;
  line-height: 1.75rem;
  font-weight: 700
}

@media (min-width: 1100px) {
  [data-mode=zigzag] .post .description h2 {
    font-size: 1.5rem;
    line-height: 2rem
  }
}

[data-mode=zigzag] .post .description p {
  margin-top: 0.75rem;
  max-height: 5rem
}

[data-mode=zigzag] .post .description p::after {
  top: calc(3.5rem + 0.25rem)
}

@media (min-width: 1100px) {
  [data-mode=zigzag] .post:nth-child(2n+1) img {
    --tw-translate-y: -1.5rem;
    --tw-translate-x: 1.5rem;
    transform: translate(var(--tw-translate-x), var(--tw-translate-y)) rotate(var(--tw-rotate)) skewX(var(--tw-skew-x)) skewY(var(--tw-skew-y)) scaleX(var(--tw-scale-x)) scaleY(var(--tw-scale-y))
  }

  [data-mode=zigzag] .post:nth-child(2n) {
    flex-direction: row-reverse
  }

  [data-mode=zigzag] .post:nth-child(2n) img {
    --tw-translate-y: -1.5rem;
    --tw-translate-x: -1.5rem;
    transform: translate(var(--tw-translate-x), var(--tw-translate-y)) rotate(var(--tw-rotate)) skewX(var(--tw-skew-x)) skewY(var(--tw-skew-y)) scaleX(var(--tw-scale-x)) scaleY(var(--tw-scale-y))
  }
}

#paging a {
  display: inline-block
}

#paging span {
  font-size: 0.875rem;
  line-height: 1.25rem
}

#paging i,
#paging span {
  margin-left: 0.25rem;
  margin-right: 0.25rem;
  height: 2rem;
  width: 2rem;
  text-align: center;
  font-size: 1rem;
  line-height: 2rem;
  --tw-text-opacity: 1;
  color: rgb(30 31 33 / var(--tw-text-opacity))
}

.dark #paging i,
.dark #paging span {
  --tw-text-opacity: 1;
  color: rgb(230 230 233 / var(--tw-text-opacity))
}

#paging span:not(.selected) {
  display: none
}

@media (min-width: 1100px) {
  #paging span:not(.selected) {
    display: inline-block
  }
}

#paging .selected {
  display: inline-block;
  border-radius: 9999px;
  --tw-bg-opacity: 1;
  background-color: rgb(53 54 56 / var(--tw-bg-opacity));
  --tw-text-opacity: 1;
  color: rgb(244 244 246 / var(--tw-text-opacity))
}

#sidebar #counter .title {
  font-size: 0.875rem;
  line-height: 1.25rem;
  --tw-text-opacity: 1;
  color: rgb(153 153 161 / var(--tw-text-opacity))
}

#sidebar #counter .count {
  --tw-text-opacity: 1;
  color: rgb(53 54 56 / var(--tw-text-opacity))
}

.dark #sidebar #counter .count {
  --tw-text-opacity: 1;
  color: rgb(244 244 246 / var(--tw-text-opacity))
}

#sidebar #category .tt_category .link_tit img,
#sidebar #category .tt_category .link_item img,
#sidebar #category .tt_category .link_sub_item img {
  display: none
}

#sidebar #category .tt_category .link_tit .c_cnt,
#sidebar #category .tt_category .link_item .c_cnt,
#sidebar #category .tt_category .link_sub_item .c_cnt {
  font-size: 0.75rem;
  line-height: 1rem
}

#sidebar #category .tt_category .link_tit {
  margin-bottom: 1.5rem;
  display: inline-block;
  font-size: 0.875rem;
  line-height: 1.25rem;
  font-weight: 700;
  --tw-text-opacity: 1;
  color: rgb(0 0 0 / var(--tw-text-opacity))
}

.dark #sidebar #category .tt_category .link_tit {
  --tw-text-opacity: 1;
  color: rgb(244 244 246 / var(--tw-text-opacity))
}

#sidebar #category .tt_category ul {
  display: flex;
  flex-direction: column;
  row-gap: 1rem
}

#sidebar #category .tt_category ul li {
  position: relative;
  font-size: 0.875rem;
  line-height: 1.25rem
}

#sidebar #category .tt_category ul li i {
  position: absolute;
  right: 0px;
  cursor: pointer;
  font-size: 0.875rem;
  line-height: 1.25rem
}

#sidebar #category .tt_category .sub_category_list li:first-child {
  margin-top: 1rem
}

#sidebar #category .tt_category .sub_category_list li .link_sub_item::before {
  margin-right: 0.25rem;
  font-size: 0.875rem;
  line-height: 1.25rem;
  --tw-text-opacity: 1;
  color: rgb(153 153 161 / var(--tw-text-opacity));
  --tw-content: '\f105';
  content: var(--tw-content);
  font-family: 'Font Awesome 6 Free';
  font-weight: 700
}

#sidebar #blogmenu ul {

  display: flex;

  flex-direction: column;

  row-gap: 0.5rem
}

#sidebar #blogmenu ul a {

  font-size: 0.875rem;

  line-height: 1.25rem
}

#sidebar .sidebar-element {

  width: 16rem;

  padding-left: 1.25rem;

  padding-right: 1.25rem
}

#sidebar .sidebar-element h2 {

  margin-bottom: 1rem;

  font-size: 0.875rem;

  line-height: 1.25rem;

  font-weight: 700;

  --tw-text-opacity: 1;

  color: rgb(30 31 33 / var(--tw-text-opacity))
}

.dark #sidebar .sidebar-element h2 {

  --tw-text-opacity: 1;

  color: rgb(244 244 246 / var(--tw-text-opacity))
}

#sidebar .sidebar-element i {

  --tw-text-opacity: 1;

  color: rgb(153 153 161 / var(--tw-text-opacity))
}

#sidebar .sidebar-element a:not(.link_tit) {

  --tw-text-opacity: 1;

  color: rgb(153 153 161 / var(--tw-text-opacity))
}

#sidebar .sidebar-element a:not(.link_tit):hover {

  --tw-text-opacity: 1;

  color: rgb(30 31 33 / var(--tw-text-opacity))
}

.dark #sidebar .sidebar-element a:not(.link_tit):hover {

  --tw-text-opacity: 1;

  color: rgb(244 244 246 / var(--tw-text-opacity))
}

#bottom a,
#bottom button {
  display: flex;
  height: 2.5rem;
  width: 2.5rem;
  align-items: center;
  justify-content: center;
  border-radius: 9999px;
  --tw-bg-opacity: 1;
  background-color: rgb(244 244 246 / var(--tw-bg-opacity));
  --tw-text-opacity: 1;
  color: rgb(102 102 110 / var(--tw-text-opacity));
  outline-width: 0px
}

#bottom a:hover,
#bottom button:hover {
  --tw-bg-opacity: 1;
  background-color: rgb(230 230 233 / var(--tw-bg-opacity))
}

.dark #bottom a,
.dark #bottom button {
  --tw-bg-opacity: 1;
  background-color: rgb(41 42 45 / var(--tw-bg-opacity));
  --tw-text-opacity: 1;
  color: rgb(244 244 246 / var(--tw-text-opacity))
}

.dark #bottom a:hover,
.dark #bottom button:hover {
  --tw-bg-opacity: 1;
  background-color: rgb(53 54 56 / var(--tw-bg-opacity))
}

#tt-body-page blockquote[data-ke-style='style1']::after {
  content: '';
  display: block;
  background: url(https://t1.daumcdn.net/keditor/dist/0.4.9/image/blockquote-style1.svg) no-repeat 50% 0;
  padding-top: 34px;
  transform: rotate(180deg);
}
